#include<iostream>
#include <string>

using namespace std;

int main_string_class(int argc, char* argv[]) {
	
	string song("Falling in Love with you");
	string elvis("Elvis Presley");
	string singer;
	cout << song + "를 부른 가수는??\n" + "힌트 : 첫글자는 " + elvis[0] + "\n";

	getline(cin, singer);

	if (singer == elvis) cout << "정답입니다";
	else cout << "틀렸습니다. 정답은 " + elvis + "입니다.";

	return 0;
}