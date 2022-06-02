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
	Power& operator << (int n); // 연산 후 Power 객체의 참조 리턴
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // 이 객체의 참조 리턴
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6; // 객체 a에 3,5,6이순서대로 더해진다.
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
	Power& operator << (int n); // 연산 후 Power 객체의 참조 리턴
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // 이 객체의 참조 리턴
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6; // 객체 a에 3,5,6이순서대로 더해진다.
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
	Power& operator << (int n); // 연산 후 Power 객체의 참조 리턴
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // 이 객체의 참조 리턴
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6; // 객체 a에 3,5,6이순서대로 더해진다.
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
	Power& operator << (int n); // 연산 후 Power 객체의 참조 리턴
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator <<(int n) {
	kick += n;
	punch += n;
	return *this; // 이 객체의 참조 리턴
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6; // 객체 a에 3,5,6이순서대로 더해진다.
	a.show();
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
