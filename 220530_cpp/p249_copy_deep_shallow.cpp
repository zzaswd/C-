<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>
#include<string.h>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler���� �����ϴ� ��. 4996 

class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) {  // const��� �ϴ� ����, np�� �޴� ���� ���ڿ� ����̸� ������ �� ���� ������ �����϶�� const ���.
		strcpy(this->name, np);
	}
	char * getName() {  // const��� �ϴ� ����, np�� �޴� ���� ���ڿ� ����̸� ������ �� ���� ������ �����϶�� const ���.
		return name;
	}
	double getArea();
};

Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	strcpy(this->name, c.name);
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

void Circle_print(Circle* p, int size) {
	for (int idx = 0; idx < size; idx++) {
		cout << "Circle " << idx << "�� ������ " << p->getArea() << "�Դϴ�\n";
		p++;
	}
}
int main(void) {
	Circle src(30);
	src.setName("������");

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "name = " << src.getName() << endl;

	Circle dest(src);
	cout << "�纻�� ���� = " << dest.getArea() << endl;
	cout << "name = " << dest.getName() << endl;
	return 0;
=======
#include <iostream>
#include<string.h>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler���� �����ϴ� ��. 4996 

class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) {  // const��� �ϴ� ����, np�� �޴� ���� ���ڿ� ����̸� ������ �� ���� ������ �����϶�� const ���.
		strcpy(this->name, np);
	}
	char * getName() {  // const��� �ϴ� ����, np�� �޴� ���� ���ڿ� ����̸� ������ �� ���� ������ �����϶�� const ���.
		return name;
	}
	double getArea();
};

Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	strcpy(this->name, c.name);
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

void Circle_print(Circle* p, int size) {
	for (int idx = 0; idx < size; idx++) {
		cout << "Circle " << idx << "�� ������ " << p->getArea() << "�Դϴ�\n";
		p++;
	}
}
int main(void) {
	Circle src(30);
	src.setName("������");

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "name = " << src.getName() << endl;

	Circle dest(src);
	cout << "�纻�� ���� = " << dest.getArea() << endl;
	cout << "name = " << dest.getName() << endl;
	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#include <iostream>
#include<string.h>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler���� �����ϴ� ��. 4996 

class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) {  // const��� �ϴ� ����, np�� �޴� ���� ���ڿ� ����̸� ������ �� ���� ������ �����϶�� const ���.
		strcpy(this->name, np);
	}
	char * getName() {  // const��� �ϴ� ����, np�� �޴� ���� ���ڿ� ����̸� ������ �� ���� ������ �����϶�� const ���.
		return name;
	}
	double getArea();
};

Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	strcpy(this->name, c.name);
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

void Circle_print(Circle* p, int size) {
	for (int idx = 0; idx < size; idx++) {
		cout << "Circle " << idx << "�� ������ " << p->getArea() << "�Դϴ�\n";
		p++;
	}
}
int main(void) {
	Circle src(30);
	src.setName("������");

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "name = " << src.getName() << endl;

	Circle dest(src);
	cout << "�纻�� ���� = " << dest.getArea() << endl;
	cout << "name = " << dest.getName() << endl;
	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#include <iostream>
#include<string.h>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler���� �����ϴ� ��. 4996 

class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) {  // const��� �ϴ� ����, np�� �޴� ���� ���ڿ� ����̸� ������ �� ���� ������ �����϶�� const ���.
		strcpy(this->name, np);
	}
	char * getName() {  // const��� �ϴ� ����, np�� �޴� ���� ���ڿ� ����̸� ������ �� ���� ������ �����϶�� const ���.
		return name;
	}
	double getArea();
};

Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	strcpy(this->name, c.name);
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

void Circle_print(Circle* p, int size) {
	for (int idx = 0; idx < size; idx++) {
		cout << "Circle " << idx << "�� ������ " << p->getArea() << "�Դϴ�\n";
		p++;
	}
}
int main(void) {
	Circle src(30);
	src.setName("������");

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "name = " << src.getName() << endl;

	Circle dest(src);
	cout << "�纻�� ���� = " << dest.getArea() << endl;
	cout << "name = " << dest.getName() << endl;
	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
}