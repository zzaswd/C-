#include<iostream>

using namespace std;

int main_cin(int argc, char* argv[]) {
	double width,height,area;

	cout << "너비와 높이를 입력하세요>>";
	cin >> width  >> height;
	area = width * height;
	cout << "면적은 " << area << "\n"; 

	/*cout << "너비를 입력하세요>>";
	cin >> width;

	cout << "높이를 입력하세요>>";
	cin >> height;
	
	cout << "면적은 " << area << "\n";*/


	return 0;
}