#include <iostream>
#include "imageSrc/MyImage.h"
using namespace std;

int main()
{
	CByteImage image1(640, 480); // ������ ȣ��  ���� ���� x ���� ����
	image1.SetConstValue(0);	 // 0���� �ʱ�ȭ

	CByteImage image2(image1); // ���� ������ ȣ��
	CByteImage image3;		   // �⺻ ������ ȣ��
	image3 = image1;		   // ���� ������ ȣ��
	CByteImage image4;
	image4 = image1;

	CByteImage image5;
	image5 = image1;

	CByteImage image6;
	image6 = image1;

	int nWidth = image1.GetWidth();   // ������ �ʺ�
	int nHeight = image1.GetHeight();  // ������ ����
	int nChannel = image1.GetChannel(); // ������ ä�� ��

	double incX = 256.0 / nWidth;
	double incY = 256.0 / nHeight;
	double newX;
	double newY;

	double r_x = 127 - incX;
	

	int r, c;
	for (r = 0; r < nHeight; r++) // �� ���� �̵�
	{
		for (c = 0; c < nWidth; c++) // �� ���� �̵�
		{ 

			image2.GetAt(c, r) = (BYTE)(c * incX); // ���� �׶��̼�
			image3.GetAt(c, r) = (BYTE)(r * incY); // ���� �׶��̼�
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


	// ��� ���� ����
	image1.SaveImage("Black.bmp");
	image2.SaveImage("GradationX.bmp");
	image3.SaveImage("GradationY.bmp");
	image4.SaveImage("GradationZ.bmp");
	image5.SaveImage("GradationR.bmp");
	image6.SaveImage("Jungang.bmp");
	return 0;
}