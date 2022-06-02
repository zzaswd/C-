<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#if 0

#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler에게 지시하는 것. 4996 
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(Person& p);
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << "," << name << endl; }
};

Person::Person(Person& p) {
	this->id = p.id;
	//this->name = p.name;
	int len = strlen(p.name);
	this->name = new char[len + 1]; // name 문자열 공간 
	strcpy(this->name, p.name);
}
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1]; // name 문자열 공간 
	strcpy(this->name, name);
}


Person::~Person() {
	if (name)
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) {
		return;
	}
	strcpy(this->name, name);
}



int main() {

	Person father(1, "kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 -----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();
	daughter.show();

	return 0;
}

#endif
=======
#if 0

#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler에게 지시하는 것. 4996 
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(Person& p);
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << "," << name << endl; }
};

Person::Person(Person& p) {
	this->id = p.id;
	//this->name = p.name;
	int len = strlen(p.name);
	this->name = new char[len + 1]; // name 문자열 공간 
	strcpy(this->name, p.name);
}
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1]; // name 문자열 공간 
	strcpy(this->name, name);
}


Person::~Person() {
	if (name)
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) {
		return;
	}
	strcpy(this->name, name);
}



int main() {

	Person father(1, "kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 -----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();
	daughter.show();

	return 0;
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0

#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler에게 지시하는 것. 4996 
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(Person& p);
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << "," << name << endl; }
};

Person::Person(Person& p) {
	this->id = p.id;
	//this->name = p.name;
	int len = strlen(p.name);
	this->name = new char[len + 1]; // name 문자열 공간 
	strcpy(this->name, p.name);
}
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1]; // name 문자열 공간 
	strcpy(this->name, name);
}


Person::~Person() {
	if (name)
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) {
		return;
	}
	strcpy(this->name, name);
}



int main() {

	Person father(1, "kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 -----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();
	daughter.show();

	return 0;
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0

#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler에게 지시하는 것. 4996 
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(Person& p);
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << "," << name << endl; }
};

Person::Person(Person& p) {
	this->id = p.id;
	//this->name = p.name;
	int len = strlen(p.name);
	this->name = new char[len + 1]; // name 문자열 공간 
	strcpy(this->name, p.name);
}
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1]; // name 문자열 공간 
	strcpy(this->name, name);
}


Person::~Person() {
	if (name)
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) {
		return;
	}
	strcpy(this->name, name);
}



int main() {

	Person father(1, "kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 -----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();
	daughter.show();

	return 0;
}

#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
