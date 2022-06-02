//#include<iostream>
//
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	double getArea();
//};
//
//double Circle::getArea() {
//	return radius * radius * 3.14;
//}
//
//void print_circle_pointer(Circle* p) {
//	cout << "입력한 원형의 크기는 " << p->getArea()<<"입니다\n";
//}
//
//void change_circle_pointer(Circle* p,int radius) {
//	p->radius = radius;
//}
//
//int main_pointer(int argc, char* argv[]) {
//	Circle* p;
//	Circle donut;
//	Circle Pizza;
//
//	p = &donut;
//	change_circle_pointer(p, 1);
//	print_circle_pointer(p);
//
//	p = &Pizza;
//	change_circle_pointer(p, 30);
//	print_circle_pointer(p);
//
//	return 0;
//}