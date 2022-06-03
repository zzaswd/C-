#if 0

#include <iostream>
using namespace std;

char& find(char arr[], int idx) {
	return arr[idx];
}


int main() {

	char arr[] = "MIKE";
	cout << arr << endl;

	find(arr, 0) = 'S';
	cout << arr << endl;

	char& ref = find(arr, 2);
	ref = 'T';
	cout << arr << endl;
	return 0;
}


#endif