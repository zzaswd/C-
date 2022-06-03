#if 0

#include <iostream>

using namespace std;

class Circle {
	int radius;

public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return this->radius; }
	double getArea() { return radius * radius * 3.14; }
};

template <class T>
void myswp(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {

	int a = 4, b = 5;
	myswp(a, b);
	cout << "a=" << a << "  b=" << b << endl;

	double c = 0.3, d = 12.5;
	myswp(c, d);
	cout << "c=" << c << "  d=" << d << endl;

	Circle donut(5), pizza(30);
	myswp(donut, pizza);
	cout << "donut 반지름 : " << donut.getRadius() << endl;
	cout << "pizza 반지름 : " << pizza.getRadius() <<endl;

	return 0;
}

#endif
