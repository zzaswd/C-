#if 0

#include<iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << x << "," << y; }
};


class ColorPoint :public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint() {
		showPoint();
		cout << color << "�� ��";
	}
};

class GrayPoint : public Point {  
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint() {
		showPoint();
		cout << color << "�� ��";
	}
};

void testShow(Point * p, string type) {
	//p->showColorPoint(); ������ ���� �߻�. �� ĳ������ ���� ColorPoint, GrayPoint �Ű������� �޾����� �׷��鼭 �Ļ� Ŭ���� ��� �Լ� ���� �Ұ�.
	
	if (type== typeid(ColorPoint).name()) {
		ColorPoint* cp = (ColorPoint*)p;
		cp->showColorPoint();
		cout << "CP" << endl;
	}
	else if (type == typeid(GrayPoint).name()) {
		GrayPoint* gp = (GrayPoint*)p;
		gp->showColorPoint();
		cout << "GP" << endl;
	}
}

int main() {

#if 0
	// up casting
	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer;

	
	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("red");
	pDer->showColorPoint();
//	pBase->showColorPoint(); ������ ���� �߻�
#endif
	ColorPoint cp;
	GrayPoint gp;

	cp.set(3, 4);
	cp.setColor("red");

	gp.set(1, 2);
	gp.setColor("black");


	// ���� �Լ����� �ٸ� pointer�� �ְ� �ʹ�. �� �� �������� �������� ���� �⺻ Ŭ������ ����Ѵٴ� ��.
	testShow(&cp,typeid(cp).name());
	testShow(&gp,typeid(gp).name());

	return 0;
}

#endif
