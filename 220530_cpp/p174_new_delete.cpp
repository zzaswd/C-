<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#if 0
#include <iostream>

using namespace std;
int main_new_delete(void) {

	cout << "�Է��� ������ ������ ? ";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "���� �޸� �Ҵ� ����";
		return 0;
	}

	for (int idx = 0; idx < n; idx++) {
		cout << idx + 1 << "��° ���� : ";
		cin >> p[idx];
	}
	int sum = 0;
	for (int idx = 0; idx < n; idx++) {
		sum += p[idx];
	}
	cout << "��� = " << sum*1.0 / n << endl;

	delete[] p;

	return 0;
}

#endif
=======
#if 0
#include <iostream>

using namespace std;
int main_new_delete(void) {

	cout << "�Է��� ������ ������ ? ";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "���� �޸� �Ҵ� ����";
		return 0;
	}

	for (int idx = 0; idx < n; idx++) {
		cout << idx + 1 << "��° ���� : ";
		cin >> p[idx];
	}
	int sum = 0;
	for (int idx = 0; idx < n; idx++) {
		sum += p[idx];
	}
	cout << "��� = " << sum*1.0 / n << endl;

	delete[] p;

	return 0;
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0
#include <iostream>

using namespace std;
int main_new_delete(void) {

	cout << "�Է��� ������ ������ ? ";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "���� �޸� �Ҵ� ����";
		return 0;
	}

	for (int idx = 0; idx < n; idx++) {
		cout << idx + 1 << "��° ���� : ";
		cin >> p[idx];
	}
	int sum = 0;
	for (int idx = 0; idx < n; idx++) {
		sum += p[idx];
	}
	cout << "��� = " << sum*1.0 / n << endl;

	delete[] p;

	return 0;
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0
#include <iostream>

using namespace std;
int main_new_delete(void) {

	cout << "�Է��� ������ ������ ? ";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "���� �޸� �Ҵ� ����";
		return 0;
	}

	for (int idx = 0; idx < n; idx++) {
		cout << idx + 1 << "��° ���� : ";
		cin >> p[idx];
	}
	int sum = 0;
	for (int idx = 0; idx < n; idx++) {
		sum += p[idx];
	}
	cout << "��� = " << sum*1.0 / n << endl;

	delete[] p;

	return 0;
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
