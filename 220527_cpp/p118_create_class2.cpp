#include<iostream>

using namespace std;

class Rectangle {
private:
	int width, height;
public:
	bool isSquare();
	Rectangle();
	Rectangle(int width, int height);
	Rectangle(int x);
};

Rectangle::Rectangle() :Rectangle(1) {}

Rectangle::Rectangle(int x) : Rectangle(x,x) {}

Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;
}
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main_class2() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형" << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형" << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형" << endl;

	return 0;
}