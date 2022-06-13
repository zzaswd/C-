#pragma once
#include<assert.h>
#include<cstdio>
#include "bmpheader.h"
#include<cstring>
#define CLIP(x) (x < 0) ? 0 : x > 255 ? 255 : x  // 하나의 행에 몇 바이트 버퍼를 잡을 것인지 제한.
												// 바이트 범위를 넘어선 x값이 들어온다면 제한.

template <typename T>
class CMyImage
{
protected:
	int m_nChannels;	// 한 pixel의 채널 수
	int m_nHeight;		// 세로 픽셀 수
	int m_nWidth;		// 가로 픽셀 수
	int m_nWStep;		// 행당 데이터 원소 수. 4의 배수로 나누어 떨어지기 위해 차후에 보정 진행.
	T* m_pImageData;	// 픽셀 배열 포인터

public:
	CMyImage(void)		// 매개변수가 없는 생성자. 생성자 서두에 멤버변수 초기화.
		:m_nChannels(0)
		, m_nHeight(0)
		, m_nWidth(0)
		, m_nWStep(0)
		, m_pImageData(NULL)
	{
	}
	CMyImage(int nWidth, int nHeight, int nChannels = 1) //
		:m_nChannels(nChannels)
		, m_nHeight(nHeight)
		, m_nWidth(nWidth)
		, m_nWStep(((nWidth* nChannels * sizeof(T) + 3) & ~3) / sizeof(T)) // 2^2승을 최소 단위로 움직이겠다 -> 화면 선언했을 때 width를 4의 배수 단위로 올림하여 맞춘다.
																		   // CPU와 메모리 사이 32bit data bus가 있는데 4의 배수가 아니면 데이터 처리가 불편해진다.
																		   // 해상도가 높아질수록 데이터 처리 속도 조금의 차이가 큰 딜레이로 되기 때문에 4의 배수로 맞춰준다.
	{
		m_pImageData = new T[m_nHeight * m_nWStep];		// 실질적 해상도. 높이와 행당 데이터 원소 수
	}

	CMyImage(const CMyImage& myImage)		// 복사 생성자
	{	
		m_nChannels = myImage.m_nChannels;
		m_nHeight = myImage.m_nHeight;
		m_nWidth = myImage.m_nWidth;
		m_nWStep = myImage.m_nWStep;
		m_pImageData = new T[m_nHeight * m_nWStep];
		memcpy(m_pImageData, myImage.m_pImageData, m_nHeight * m_nWStep * sizeof(T)); // 메모리 카피 함수. memcpy([저장할 곳], [원본], [크기]) 
	}
	
	CMyImage& operator =(const CMyImage& myImage) {		// 연산자 중복
		if (this == &myImage)
			return *this;
		m_nChannels = myImage.m_nChannels;
		m_nHeight = myImage.m_nHeight;
		m_nWidth = myImage.m_nWidth;
		m_nWStep = myImage.m_nWStep;

		if (m_pImageData)		// 기존 존재하던 데이터 메모리 해제 후
			delete[] m_pImageData;
		if (myImage.m_pImageData != NULL) {		// 새로운 힙 공간 생성, 그리고 메모리 카피.
			m_pImageData = new T[m_nHeight * m_nWStep];
			memcpy(m_pImageData, myImage.m_pImageData, m_nHeight * m_nWStep * sizeof(T));
		}
		return *this;
	}

	template <typename From>						// 복사 생성자 오버로딩. 서로 다른 타입의 객체를 이용하여 복사 생성자를 호출할 때.
	CMyImage(const CMyImage<From>& myImage) {		// From type. T를 기존에 쓰고 있으니깐 구분하려고 사용.
		m_nChannels = myImage.GetChannel();
		m_nHeight = myImage.GetHeight();
		m_nWidth = myImage.GetWidth();
		m_nWStep = ((m_nWidth * m_nChannels * sizeof(T) + 3) & ~3) / sizeof(T);
		m_pImageData = new T[m_nHeight * m_nWStep]; 

		int nWStep = myImage.GetWStep();

		if (sizeof(T) == 1) {		// Byte가 1이면

			for (int r = 0; r < m_nHeight; r++) {
				T* pDst = GetPtr(r);
					From * pSrc = myImage.GetPtr(r);
				for (int c = 0; c < nWStep; c++) {
					pDst[c] = (T)CLIP(pSrc[c]);
				}
			}
		}
		else {						// 
			for (int r = 0; r < m_nHeight; r++) {
				T* pDst = GetPtr(r);
				From* pSrc = myImage.GetPtr(r);
				for (int c = 0; c < nWStep; c++) {
					pDst[c] = (T)pSrc[c];
				}
			}

		}


	}

	~CMyImage(void) {		// 소멸자
		if (m_pImageData) delete[] m_pImageData;
	}

	bool LoadImage(const char* filename) {		// 
		assert(sizeof(T) == 1); // BYTE형 경우만 가능
		if (!strcmp(".bmp", &filename[strlen(filename) - 4])) {
			FILE* pFile;
			pFile = fopen(filename, "rb");
			if (!pFile) return false;
			BITMAPFILEHEADER fileHeader;

			if (!fread(&fileHeader, sizeof(BITMAPFILEHEADER), 1, pFile)) {
				fclose(pFile);
				return false;
			}

			if (fileHeader.bfType != 0x4D42) { // 'BM' 문자 검사{
				fclose(pFile);
				return false;
			}

			BITMAPINFOHEADER infoHeader;

			if (!fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, pFile)) {
				fclose(pFile);
				return false;
			}

			if (infoHeader.biBitCount != 8 && infoHeader.biBitCount != 24) {
				fclose(pFile);
				return false;
			}

			if (m_nWidth != infoHeader.biWidth && m_nHeight != infoHeader.biHeight && m_nChannels != infoHeader.biBitCount / 8) {
				if (m_pImageData) delete[] m_pImageData;
				m_nChannels = infoHeader.biBitCount / 8;
				m_nHeight = infoHeader.biHeight;
				m_nWidth = infoHeader.biWidth;
				m_nWStep = (m_nWidth * m_nChannels * sizeof(T) + 3) & ~3;
				m_pImageData = new T[m_nHeight * m_nWStep];
			}

			fseek(pFile, fileHeader.bfOffBits, SEEK_SET);

			int r;
			for (r = m_nHeight - 1; r >= 0; r--) {
				if (!fread(&m_pImageData[r * m_nWStep], sizeof(BYTE), m_nWStep, pFile)) {
					fclose(pFile);
					return false;
				}
			}
			fclose(pFile);
			return true;
		}
		else {
			return false;
		}
	}
	bool SaveImage(const char* filename) { 
		assert(sizeof(T) == 1); // BYTE 형 경우만 가능

		if (!strcmp(".bmp", &filename[strlen(filename) - 4])) { // 일정 문자열에서 .의 주소를 알기 위해서 주소 연산자 사용. 끝에서 4자 .bmp만큼 주소를 shift 시킨 것이다.
			FILE* pFile;
			pFile = fopen(filename, "wb"); // wb : write byte. 바이트 단위로 쓰겠다. 첫 번째 매개변수가 주소값이 들어가있으므로 그 값을 byte단위로 받아온 것. 포인터면 그 주소를 받아 옴. 
			
			if (!pFile)
				return false;

			BITMAPFILEHEADER fileHeader;
			fileHeader.bfType = 0x4D42; // "BM"
			fileHeader.bfSize = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER) + m_nWStep * m_nHeight + (m_nChannels == 1) * 1024;


			fileHeader.bfReserved1 = 0;
			fileHeader.bfReserved2 = 0;
			fileHeader.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER) + (m_nChannels == 1) * 256 * sizeof(RGBQUAD);

			fwrite(&fileHeader, sizeof(BITMAPFILEHEADER), 1, pFile);

			BITMAPINFOHEADER infoHeader;
			infoHeader.biSize = sizeof(BITMAPINFOHEADER);
			infoHeader.biWidth = m_nWidth;
			infoHeader.biHeight = m_nHeight;
			infoHeader.biPlanes = 1;
			infoHeader.biBitCount = m_nChannels * 8;
			infoHeader.biCompression =0;
			infoHeader.biSizeImage = m_nWStep * m_nHeight;
			infoHeader.biClrImportant = 0;
			infoHeader.biClrUsed = 0;
			infoHeader.biXPelsPerMeter = 0;
			infoHeader.biYPelsPerMeter = 0;

			fwrite(&infoHeader, sizeof(BITMAPINFOHEADER), 1, pFile);

			if (m_nChannels == 1) {		// palete 정보
				for (int l = 0; l < 256; l++) {		
					RGBQUAD GrayPalette = { (BYTE)l,(BYTE)l,(BYTE)l,0 };		//grayscale을 담당.
					fwrite(&GrayPalette, sizeof(RGBQUAD), 1, pFile);
				}
			}

			int r;
			for (r = m_nHeight - 1; r >= 0; r--) {
				fwrite(&m_pImageData[r * m_nWStep], sizeof(BYTE), m_nWStep, pFile);
			}

			fclose(pFile);
			return true;
		}
		else {
			return false;
		}
	}

	bool IsEmpty() const {
		return m_pImageData ? false : true;
	}

	void SetConstValue(T val) {
		if (val == 0) { // 조건(1)
			memset(m_pImageData, 0, m_nWStep * m_nHeight * sizeof(T));
			return;
		}

		if (sizeof(T) == 1) {// 조건(2), BYTE형인 경우
			memset(m_pImageData, val, m_nWStep * m_nHeight);
		}
		else { // 나머지 경우들
			T* pData = m_pImageData;
			for (int r = 0; r < m_nHeight; r++) {
				for (int c = 0; c < m_nWidth; c++) {
					pData[c] = val;
				}
				pData += m_nWStep;
			}
		}
	}

	inline T& GetAt(int x, int y ,int c = 0) const { // x,y 좌표의 색 좌표 값을 삽입. get at을 총 640 * 480 번 진행하기 때문에 오버헤드를 최소화하기 위해 inline으로 선언.
		assert(x >= 0 && x < m_nWidth&& y >= 0 && y < m_nHeight);
		return m_pImageData[m_nWStep * y + m_nChannels * x + c];
	}

	int GetChannel() const { return m_nChannels; }
	int GetHeight() const { return m_nHeight; }
	int GetWidth() const { return m_nWidth; }
	int GetWStep() const { return m_nWStep; }
	T* GetPtr(int r = 0, int c = 0) const { return m_pImageData + r * m_nWStep + c; } // 원하는 좌표에 

};

typedef CMyImage <BYTE> CByteImage;
typedef CMyImage <int> CIntImage;
typedef CMyImage <float> CFloatImage;
typedef CMyImage <double> CDoubleImage;
