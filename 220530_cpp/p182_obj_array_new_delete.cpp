<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#if 0
#include <iostream>
#include <string>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	void setRadius(int r);
	double getArea();
	~Circle();
};

Circle::Circle() {
	radius = 1;
	cout << "기본 생성자" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "r : " << r <<" 생성자" << endl;
}

Circle::~Circle() {
	cout << this->radius << " 소멸자" << endl;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}

void Circle::setRadius(int r) {
	radius = r;
}

int main(void) {
	//case1 객체 배열 선언 후 초기화
	//Circle* p = new Circle[3];
	//p[0] = Circle();
	//p[1] = Circle(2);
	//p[2] = Circle(3);


	//case2 객체 배열 선언과 동시에 초기화
	//Circle* p = new Circle[3]{ Circle(),Circle(1),Circle(2) };
	
	/*for (int idx = 0; idx < 3; idx++) {
		cout << idx << " : " << (p + idx)->getArea() << endl;
	}*/

	// case 3 객체 배열 선언
	// 
	//Circle arr[3] = { Circle(),Circle(1),Circle(2) }; 

	Circle arr1;
	Circle arr2(2);
	Circle arr3(3);
	
	//for (int idx = 0; idx < 3; idx++) {
	//	cout << idx << " : " << arr[idx].getArea() << endl;
	//}
	//for (int idx = 0; idx < 3; idx++) {
	//	cout << idx << " : " << (q + idx)->getArea() << endl;
	//}
//	delete[] p;


	string str="asdasdfasdasdasdasdas";
	cout << int(str.find("5"))<<endl;
	cout << str.size()<<endl;
	cout << str.capacity();
}

=======
#if 0
#include <iostream>
#include <string>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	void setRadius(int r);
	double getArea();
	~Circle();
};

Circle::Circle() {
	radius = 1;
	cout << "기본 생성자" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "r : " << r <<" 생성자" << endl;
}

Circle::~Circle() {
	cout << this->radius << " 소멸자" << endl;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}

void Circle::setRadius(int r) {
	radius = r;
}

int main(void) {
	//case1 객체 배열 선언 후 초기화
	//Circle* p = new Circle[3];
	//p[0] = Circle();
	//p[1] = Circle(2);
	//p[2] = Circle(3);


	//case2 객체 배열 선언과 동시에 초기화
	//Circle* p = new Circle[3]{ Circle(),Circle(1),Circle(2) };
	
	/*for (int idx = 0; idx < 3; idx++) {
		cout << idx << " : " << (p + idx)->getArea() << endl;
	}*/

	// case 3 객체 배열 선언
	// 
	//Circle arr[3] = { Circle(),Circle(1),Circle(2) }; 

	Circle arr1;
	Circle arr2(2);
	Circle arr3(3);
	
	//for (int idx = 0; idx < 3; idx++) {
	//	cout << idx << " : " << arr[idx].getArea() << endl;
	//}
	//for (int idx = 0; idx < 3; idx++) {
	//	cout << idx << " : " << (q + idx)->getArea() << endl;
	//}
//	delete[] p;


	string str="asdasdfasdasdasdasdas";
	cout << int(str.find("5"))<<endl;
	cout << str.size()<<endl;
	cout << str.capacity();
}

>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0
#include <iostream>
#include <string>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	void setRadius(int r);
	double getArea();
	~Circle();
};

Circle::Circle() {
	radius = 1;
	cout << "기본 생성자" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "r : " << r <<" 생성자" << endl;
}

Circle::~Circle() {
	cout << this->radius << " 소멸자" << endl;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}

void Circle::setRadius(int r) {
	radius = r;
}

int main(void) {
	//case1 객체 배열 선언 후 초기화
	//Circle* p = new Circle[3];
	//p[0] = Circle();
	//p[1] = Circle(2);
	//p[2] = Circle(3);


	//case2 객체 배열 선언과 동시에 초기화
	//Circle* p = new Circle[3]{ Circle(),Circle(1),Circle(2) };
	
	/*for (int idx = 0; idx < 3; idx++) {
		cout << idx << " : " << (p + idx)->getArea() << endl;
	}*/

	// case 3 객체 배열 선언
	// 
	//Circle arr[3] = { Circle(),Circle(1),Circle(2) }; 

	Circle arr1;
	Circle arr2(2);
	Circle arr3(3);
	
	//for (int idx = 0; idx < 3; idx++) {
	//	cout << idx << " : " << arr[idx].getArea() << endl;
	//}
	//for (int idx = 0; idx < 3; idx++) {
	//	cout << idx << " : " << (q + idx)->getArea() << endl;
	//}
//	delete[] p;


	string str="asdasdfasdasdasdasdas";
	cout << int(str.find("5"))<<endl;
	cout << str.size()<<endl;
	cout << str.capacity();
}

>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0
#include <iostream>
#include <string>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	void setRadius(int r);
	double getArea();
	~Circle();
};

Circle::Circle() {
	radius = 1;
	cout << "기본 생성자" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "r : " << r <<" 생성자" << endl;
}

Circle::~Circle() {
	cout << this->radius << " 소멸자" << endl;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}

void Circle::setRadius(int r) {
	radius = r;
}

int main(void) {
	//case1 객체 배열 선언 후 초기화
	//Circle* p = new Circle[3];
	//p[0] = Circle();
	//p[1] = Circle(2);
	//p[2] = Circle(3);


	//case2 객체 배열 선언과 동시에 초기화
	//Circle* p = new Circle[3]{ Circle(),Circle(1),Circle(2) };
	
	/*for (int idx = 0; idx < 3; idx++) {
		cout << idx << " : " << (p + idx)->getArea() << endl;
	}*/

	// case 3 객체 배열 선언
	// 
	//Circle arr[3] = { Circle(),Circle(1),Circle(2) }; 

	Circle arr1;
	Circle arr2(2);
	Circle arr3(3);
	
	//for (int idx = 0; idx < 3; idx++) {
	//	cout << idx << " : " << arr[idx].getArea() << endl;
	//}
	//for (int idx = 0; idx < 3; idx++) {
	//	cout << idx << " : " << (q + idx)->getArea() << endl;
	//}
//	delete[] p;


	string str="asdasdfasdasdasdasdas";
	cout << int(str.find("5"))<<endl;
	cout << str.size()<<endl;
	cout << str.capacity();
}

>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
#endif