#if 0

#include <iostream>
using namespace std;

bool average(int iarr[], int size,int & avg) {
	if (size <= 0) return false;

	int sum = 0;
	for (int idx = 0; idx < size; idx++) {
		sum = iarr[idx];
	}
	avg = sum / size;
	return true;
}

int main() {
	int x[] = { 1,2,3,4 };
	int avg;
	

	if (average(x, -1, avg)) cout << "avg = " << avg << endl;
	else cout << "�Ű����� �����Դϴ�.\n";

	if (average(x, 3, avg)) cout << "avg = " << avg << endl;
	else cout << "�Ű����� �����Դϴ�.\n";

	return 0;
}

#endif
