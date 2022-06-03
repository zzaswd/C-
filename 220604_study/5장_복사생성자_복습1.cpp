
#if 1

#include< iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(const Circle& c) { this->radius = c.radius; }
	Circle(int r = 1) { radius = r; }
	double getArea() { return radius * radius * 3.14; }
};

int main() {
	Circle src(30);
	Circle dest(src);

	cout << "������ ���� " << src.getArea() << endl;

	cout << "�纻�� ���� " << src.getArea() << endl;


	return 0;
}

#endif