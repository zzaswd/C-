#include<iostream>

using namespace std;

int main_char_arr() {

	cout << "�̸��� �Է��ϼ���: ";
	char name[11]; 
	cin >> name;
	cout << name;

	return 0;
}

int main() {
	cout << "�ּҸ� �Է��ϼ��� : ";
	char address[100];
	cin.getline(address, 100, '*');

	cout << address << "\0";

	return 0;
}