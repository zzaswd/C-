<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#if 0
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

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

	Circle* p = new Circle;
	Circle* q = new Circle(30);
	
	cout << p->getArea() << endl << q->getArea();
	
	delete p, q;

	return 0;
}



#endif
=======
#if 0
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

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

	Circle* p = new Circle;
	Circle* q = new Circle(30);
	
	cout << p->getArea() << endl << q->getArea();
	
	delete p, q;

	return 0;
}



#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

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

	Circle* p = new Circle;
	Circle* q = new Circle(30);
	
	cout << p->getArea() << endl << q->getArea();
	
	delete p, q;

	return 0;
}



#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#if 0
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

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

	Circle* p = new Circle;
	Circle* q = new Circle(30);
	
	cout << p->getArea() << endl << q->getArea();
	
	delete p, q;

	return 0;
}



#endif
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
