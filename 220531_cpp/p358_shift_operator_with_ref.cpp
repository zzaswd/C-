<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#if 0

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator << (int n); // ���� �� Power ��ü�� ���� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // �� ��ü�� ���� ����
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6; // ��ü a�� 3,5,6�̼������ ��������.
	a.show();
}

#endif
=======
#if 0

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator << (int n); // ���� �� Power ��ü�� ���� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // �� ��ü�� ���� ����
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6; // ��ü a�� 3,5,6�̼������ ��������.
	a.show();
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator << (int n); // ���� �� Power ��ü�� ���� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // �� ��ü�� ���� ����
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6; // ��ü a�� 3,5,6�̼������ ��������.
	a.show();
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator << (int n); // ���� �� Power ��ü�� ���� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // �� ��ü�� ���� ����
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6; // ��ü a�� 3,5,6�̼������ ��������.
	a.show();
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
