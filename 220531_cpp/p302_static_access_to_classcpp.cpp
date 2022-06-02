<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#if 0

#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10;

int main() {
	Person::addShared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 300;
	Person::addShared(100);
	cout << han.money << ' ' << Person::sharedMoney << endl;


	return 0;
}

#endif
=======
#if 0

#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10;

int main() {
	Person::addShared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 300;
	Person::addShared(100);
	cout << han.money << ' ' << Person::sharedMoney << endl;


	return 0;
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0

#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10;

int main() {
	Person::addShared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 300;
	Person::addShared(100);
	cout << han.money << ' ' << Person::sharedMoney << endl;


	return 0;
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0

#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10;

int main() {
	Person::addShared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 300;
	Person::addShared(100);
	cout << han.money << ' ' << Person::sharedMoney << endl;


	return 0;
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
