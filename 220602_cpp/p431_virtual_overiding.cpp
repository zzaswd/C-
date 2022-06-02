#if 0

#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "BASE::f() called" << endl; }
};

class Derived :public Base {
public:
	void f() { cout << " Derived::f() called"<<endl; }
};


int main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase;
	pBase = pDer;
	pBase->f();

	//Base base;
	//base.f();

	return 0;
}

#endif
