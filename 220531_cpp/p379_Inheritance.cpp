<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>
#include <cstring>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	void setPoint(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << "(" << x << "," << y << ")"; }
};


class ColorPoint : public Point {
private:
	string color;
public:
	void setColor(string color) {
		this->color=color;
	}
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color<< ":";
	showPoint();
}

int main() {
	Point;
	ColorPoint cp;
	cp.setPoint(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
	return 0;
=======
#include <iostream>
#include <cstring>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	void setPoint(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << "(" << x << "," << y << ")"; }
};


class ColorPoint : public Point {
private:
	string color;
public:
	void setColor(string color) {
		this->color=color;
	}
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color<< ":";
	showPoint();
}

int main() {
	Point;
	ColorPoint cp;
	cp.setPoint(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#include <iostream>
#include <cstring>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	void setPoint(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << "(" << x << "," << y << ")"; }
};


class ColorPoint : public Point {
private:
	string color;
public:
	void setColor(string color) {
		this->color=color;
	}
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color<< ":";
	showPoint();
}

int main() {
	Point;
	ColorPoint cp;
	cp.setPoint(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#include <iostream>
#include <cstring>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	void setPoint(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << "(" << x << "," << y << ")"; }
};


class ColorPoint : public Point {
private:
	string color;
public:
	void setColor(string color) {
		this->color=color;
	}
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color<< ":";
	showPoint();
}

int main() {
	Point;
	ColorPoint cp;
	cp.setPoint(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
}