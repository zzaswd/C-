#include <iostream>
#include "imageSrc/MyImage.h"
using namespace std;

int main()
{
	CByteImage image1(640, 480); // 생성자 호출  가로 길이 x 세로 길이
	image1.SetConstValue(0);	 // 0으로 초기화

	CByteImage image2(image1); // 복사 생성자 호출
	CByteImage image3;		   // 기본 생성자 호출
	image3 = image1;		   // 대입 연산자 호출
	CByteImage image4;
	image4 = image1;

	CByteImage image5;
	image5 = image1;

	CByteImage image6;
	image6 = image1;

	int nWidth = image1.GetWidth();   // 영상의 너비
	int nHeight = image1.GetHeight();  // 영상의 높이
	int nChannel = image1.GetChannel(); // 영상의 채널 수

	double incX = 256.0 / nWidth;
	double incY = 256.0 / nHeight;
	double newX;
	double newY;

	double r_x = 127 - incX;
	

	int r, c;
	for (r = 0; r < nHeight; r++) // 행 단위 이동
	{
		for (c = 0; c < nWidth; c++) // 열 단위 이동
		{ 

			image2.GetAt(c, r) = (BYTE)(c * incX); // 가로 그라데이션
			image3.GetAt(c, r) = (BYTE)(r * incY); // 세로 그라데이션
			image4.GetAt(c, r) = (BYTE)(255-(c * incX + r * incY) / 2);
			image5.GetAt(c, r) = (BYTE)((255-c * incX + +r * incY) / 2);

			if (c * incX <= 127) newX = 2 * (127 - (c * incX));
			else newX = 2 * ((c * incX)-127);
			if (r * incY <= 127) newY = 2 * (127 - (r * incY));
			else newY = 2 * ((r * incY) - 127);

			image6.GetAt(c, r) = (BYTE)((newX+newY)/2);

		}
		if ((c < 10 || 630 < c) && (r < 10 || r>470))
		cout << "\n";
	}


	// 결과 영상 저장
	image1.SaveImage("Black.bmp");
	image2.SaveImage("GradationX.bmp");
	image3.SaveImage("GradationY.bmp");
	image4.SaveImage("GradationZ.bmp");
	image5.SaveImage("GradationR.bmp");
	image6.SaveImage("Jungang.bmp");
	return 0;
}