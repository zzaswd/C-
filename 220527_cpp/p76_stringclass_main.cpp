#include<iostream>
#include <string>

using namespace std;

int main_string_class(int argc, char* argv[]) {
	
	string song("Falling in Love with you");
	string elvis("Elvis Presley");
	string singer;
	cout << song + "�� �θ� ������??\n" + "��Ʈ : ù���ڴ� " + elvis[0] + "\n";

	getline(cin, singer);

	if (singer == elvis) cout << "�����Դϴ�";
	else cout << "Ʋ�Ƚ��ϴ�. ������ " + elvis + "�Դϴ�.";

	return 0;
}