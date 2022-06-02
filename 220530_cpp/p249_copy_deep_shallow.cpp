<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>
#include<string.h>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler에게 지시하는 것. 4996 

class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) {  // const라고 하는 것은, np로 받는 것이 문자열 상수이면 수정할 수 없기 때문에 조심하라고 const 사용.
		strcpy(this->name, np);
	}
	char * getName() {  // const라고 하는 것은, np로 받는 것이 문자열 상수이면 수정할 수 없기 때문에 조심하라고 const 사용.
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
		cout << "Circle " << idx << "의 면적은 " << p->getArea() << "입니다\n";
		p++;
	}
}
int main(void) {
	Circle src(30);
	src.setName("강시형");

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "name = " << src.getName() << endl;

	Circle dest(src);
	cout << "사본의 면적 = " << dest.getArea() << endl;
	cout << "name = " << dest.getName() << endl;
	return 0;
=======
#include <iostream>
#include<string.h>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler에게 지시하는 것. 4996 

class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) {  // const라고 하는 것은, np로 받는 것이 문자열 상수이면 수정할 수 없기 때문에 조심하라고 const 사용.
		strcpy(this->name, np);
	}
	char * getName() {  // const라고 하는 것은, np로 받는 것이 문자열 상수이면 수정할 수 없기 때문에 조심하라고 const 사용.
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
		cout << "Circle " << idx << "의 면적은 " << p->getArea() << "입니다\n";
		p++;
	}
}
int main(void) {
	Circle src(30);
	src.setName("강시형");

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "name = " << src.getName() << endl;

	Circle dest(src);
	cout << "사본의 면적 = " << dest.getArea() << endl;
	cout << "name = " << dest.getName() << endl;
	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#include <iostream>
#include<string.h>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler에게 지시하는 것. 4996 

class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) {  // const라고 하는 것은, np로 받는 것이 문자열 상수이면 수정할 수 없기 때문에 조심하라고 const 사용.
		strcpy(this->name, np);
	}
	char * getName() {  // const라고 하는 것은, np로 받는 것이 문자열 상수이면 수정할 수 없기 때문에 조심하라고 const 사용.
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
		cout << "Circle " << idx << "의 면적은 " << p->getArea() << "입니다\n";
		p++;
	}
}
int main(void) {
	Circle src(30);
	src.setName("강시형");

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "name = " << src.getName() << endl;

	Circle dest(src);
	cout << "사본의 면적 = " << dest.getArea() << endl;
	cout << "name = " << dest.getName() << endl;
	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#include <iostream>
#include<string.h>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996) // compiler에게 지시하는 것. 4996 

class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) {  // const라고 하는 것은, np로 받는 것이 문자열 상수이면 수정할 수 없기 때문에 조심하라고 const 사용.
		strcpy(this->name, np);
	}
	char * getName() {  // const라고 하는 것은, np로 받는 것이 문자열 상수이면 수정할 수 없기 때문에 조심하라고 const 사용.
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
		cout << "Circle " << idx << "의 면적은 " << p->getArea() << "입니다\n";
		p++;
	}
}
int main(void) {
	Circle src(30);
	src.setName("강시형");

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "name = " << src.getName() << endl;

	Circle dest(src);
	cout << "사본의 면적 = " << dest.getArea() << endl;
	cout << "name = " << dest.getName() << endl;
	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
}