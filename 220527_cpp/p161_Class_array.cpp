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

void Circle_print(Circle*p,int size) {
	for (int idx = 0; idx < size; idx++) {
		cout << "Circle " << idx << "의 면적은 " << p->getArea() << "입니다\n";
		p++;
	}
}
int main(void) {
	//Circle circleArray[3] = {  Circle(10),Circle(20),Circle() };
	Circle circleArray[3];

	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int idx = 0; idx < sizeof(circleArray)/sizeof(Circle); idx++) {
		cout << "Circle " << idx << "의 면적은 " << circleArray[idx].getArea() << "입니다\n";
	}

	int size = sizeof(circleArray) / sizeof(Circle);
	Circle_print(circleArray, size);

	return 0;
}