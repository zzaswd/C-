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
//Circle::Circle():Circle(1){ // ���� ������
//	
//}
//
//Circle::Circle(int r) {	// Ÿ�� ������
//	radius = r;
//	cout << "������ " << radius << " �� ����" << endl;
//}
//
//double Circle::getArea() {
//	return radius * radius * 3.14;
//}
//
//int main_create_constructor(void) {
//	Circle donut;
//	cout << "������ ���� = " << donut.getArea()<<endl;
//
//	Circle pizza(30);
//	cout << "������ ���� = " << pizza.getArea();
//
//	return 0;
//}