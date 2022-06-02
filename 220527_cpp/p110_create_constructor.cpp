//#include<iostream>
//
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	double getArea();
//	Circle();
//	Circle(int r);
//};
//
//
//Circle::Circle():Circle(1){ // 위임 생성자
//	
//}
//
//Circle::Circle(int r) {	// 타겟 생성자
//	radius = r;
//	cout << "반지름 " << radius << " 원 생성" << endl;
//}
//
//double Circle::getArea() {
//	return radius * radius * 3.14;
//}
//
//int main_create_constructor(void) {
//	Circle donut;
//	cout << "도넛의 면적 = " << donut.getArea()<<endl;
//
//	Circle pizza(30);
//	cout << "피자의 면적 = " << pizza.getArea();
//
//	return 0;
//}