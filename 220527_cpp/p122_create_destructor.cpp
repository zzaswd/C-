//#include<iostream>
//
//
//
//using namespace std;
//
//typedef struct Circle_destructor {
//private:
//	int radius;
//public:
//	Circle_destructor();
//	Circle_destructor(int r);
//	~Circle_destructor();
//	
//}circle_des;
//
//Circle_destructor::Circle_destructor() {
//	radius = 1;
//	cout << "반지름 :" << radius << " 원 생성\n";
//}
//Circle_destructor::Circle_destructor(int r) {
//	radius = r;
//	cout << "반지름 :" << radius << " 원 생성\n";
//}
//
//Circle_destructor::~Circle_destructor() {
//	cout << "반지름 : " << radius << " 해제\n";
//}
//
//circle_des cir3(30);
//circle_des cir4(40);
//
//int main_destructor(void) {
//	circle_des cir1;
//	circle_des cir2(20);
//
//	return 0;
//}