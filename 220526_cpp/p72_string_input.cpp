#include<iostream>

using namespace std;

int main_char_arr() {

	cout << "이름을 입력하세요: ";
	char name[11]; 
	cin >> name;
	cout << name;

	return 0;
}

int main() {
	cout << "주소를 입력하세요 : ";
	char address[100];
	cin.getline(address, 100, '*');

	cout << address << "\0";

	return 0;
}