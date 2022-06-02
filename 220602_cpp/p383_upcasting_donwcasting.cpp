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
		cout << color << "의 색";
	}
};

class GrayPoint : public Point {  
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint() {
		showPoint();
		cout << color << "의 색";
	}
};

void testShow(Point * p, string type) {
	//p->showColorPoint(); 컴파일 에러 발생. 업 캐스팅을 통해 ColorPoint, GrayPoint 매개변수를 받았지만 그러면서 파생 클래스 멤버 함수 접근 불가.
	
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
//	pBase->showColorPoint(); 컴파일 오류 발생
#endif
	ColorPoint cp;
	GrayPoint gp;

	cp.set(3, 4);
	cp.setColor("red");

	gp.set(1, 2);
	gp.setColor("black");


	// 같은 함수지만 다른 pointer를 넣고 싶다. 이 두 포인터의 공통점은 같은 기본 클래스를 상속한다는 것.
	testShow(&cp,typeid(cp).name());
	testShow(&gp,typeid(gp).name());

	return 0;
}

#endif
