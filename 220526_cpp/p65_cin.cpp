#include<iostream>

using namespace std;

int main_cin(int argc, char* argv[]) {
	double width,height,area;

	cout << "�ʺ�� ���̸� �Է��ϼ���>>";
	cin >> width  >> height;
	area = width * height;
	cout << "������ " << area << "\n"; 

	/*cout << "�ʺ� �Է��ϼ���>>";
	cin >> width;

	cout << "���̸� �Է��ϼ���>>";
	cin >> height;
	
	cout << "������ " << area << "\n";*/


	return 0;
}