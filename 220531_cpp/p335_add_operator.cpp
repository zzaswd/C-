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
		this->kick = kick;
		this->punch = punch;
		cout << "생성자 !!" << endl;
	}
	void show();
	Power operator+(Power& op);
	bool operator==(Power& op);
};

void Power::show() {
	cout << "kick = " << kick << "   punch = " << punch << endl;
}

Power Power::operator+(Power& op) {
	Power temp;
	cout << "dadads" << endl;
	temp.kick = this->kick + op.kick;
	temp.punch = this->punch + op.punch;
	return temp;
}

bool Power::operator==(Power& op) {
	if (this->kick == op.kick && this->punch == op.punch) return true;
	else return false;
}


int main() {

	Power a(4, 5), b(4, 5), c;

	c.show();
	c = a + b;
	a.show();
	b.show();
	c.show();
	if (a == b) cout << "두 파워가 같다." << endl;
	else cout << "두 파워가 같지 않다." << endl;
	return 0;
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
		this->kick = kick;
		this->punch = punch;
		cout << "생성자 !!" << endl;
	}
	void show();
	Power operator+(Power& op);
	bool operator==(Power& op);
};

void Power::show() {
	cout << "kick = " << kick << "   punch = " << punch << endl;
}

Power Power::operator+(Power& op) {
	Power temp;
	cout << "dadads" << endl;
	temp.kick = this->kick + op.kick;
	temp.punch = this->punch + op.punch;
	return temp;
}

bool Power::operator==(Power& op) {
	if (this->kick == op.kick && this->punch == op.punch) return true;
	else return false;
}


int main() {

	Power a(4, 5), b(4, 5), c;

	c.show();
	c = a + b;
	a.show();
	b.show();
	c.show();
	if (a == b) cout << "두 파워가 같다." << endl;
	else cout << "두 파워가 같지 않다." << endl;
	return 0;
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
		this->kick = kick;
		this->punch = punch;
		cout << "생성자 !!" << endl;
	}
	void show();
	Power operator+(Power& op);
	bool operator==(Power& op);
};

void Power::show() {
	cout << "kick = " << kick << "   punch = " << punch << endl;
}

Power Power::operator+(Power& op) {
	Power temp;
	cout << "dadads" << endl;
	temp.kick = this->kick + op.kick;
	temp.punch = this->punch + op.punch;
	return temp;
}

bool Power::operator==(Power& op) {
	if (this->kick == op.kick && this->punch == op.punch) return true;
	else return false;
}


int main() {

	Power a(4, 5), b(4, 5), c;

	c.show();
	c = a + b;
	a.show();
	b.show();
	c.show();
	if (a == b) cout << "두 파워가 같다." << endl;
	else cout << "두 파워가 같지 않다." << endl;
	return 0;
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
		this->kick = kick;
		this->punch = punch;
		cout << "생성자 !!" << endl;
	}
	void show();
	Power operator+(Power& op);
	bool operator==(Power& op);
};

void Power::show() {
	cout << "kick = " << kick << "   punch = " << punch << endl;
}

Power Power::operator+(Power& op) {
	Power temp;
	cout << "dadads" << endl;
	temp.kick = this->kick + op.kick;
	temp.punch = this->punch + op.punch;
	return temp;
}

bool Power::operator==(Power& op) {
	if (this->kick == op.kick && this->punch == op.punch) return true;
	else return false;
}


int main() {

	Power a(4, 5), b(4, 5), c;

	c.show();
	c = a + b;
	a.show();
	b.show();
	c.show();
	if (a == b) cout << "두 파워가 같다." << endl;
	else cout << "두 파워가 같지 않다." << endl;
	return 0;
}
#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
