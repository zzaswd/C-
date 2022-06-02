#include<iostream>
#include "p129_PrivateAccessError.h"
using namespace std;



int main_capsulation(void) {

	//PrivateAccessError objA;
	PrivateAccessError objA(1, 3);
	cout << "objA : " << objA.a_getter() << "\n";

	PrivateAccessError objB(100);
	//objB.a = 10;
	cout << "objB : " << objB.a_getter() << "\n";

	objB.b = 20;

	//objB.f();
	objB.g();

	objB.h();
	return 0;
}