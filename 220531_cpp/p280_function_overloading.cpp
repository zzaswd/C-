<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#if 0

#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int max = a[0];
	for (int idx = 1; idx < size; idx++) {
		if (max < a[idx]) max = a[idx];
	}

	return max;
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}

=======
#if 0

#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int max = a[0];
	for (int idx = 1; idx < size; idx++) {
		if (max < a[idx]) max = a[idx];
	}

	return max;
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}

>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0

#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int max = a[0];
	for (int idx = 1; idx < size; idx++) {
		if (max < a[idx]) max = a[idx];
	}

	return max;
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}

>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0

#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int max = a[0];
	for (int idx = 1; idx < size; idx++) {
		if (max < a[idx]) max = a[idx];
	}

	return max;
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}

>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
#endif