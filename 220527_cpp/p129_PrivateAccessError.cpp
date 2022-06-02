#include  "p129_PrivateAccessError.h"

PrivateAccessError::PrivateAccessError() {
	a = 1;
	b = 1;
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}


void PrivateAccessError::f() {
	a = 5;
	b = 5;
}

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}


// private 접근 가능하도록 만든 코드
int PrivateAccessError::a_getter() {
	return a;
}

PrivateAccessError::PrivateAccessError(int x, int y) :PrivateAccessError() {} // 위임 생성자 사용

void PrivateAccessError::h() {
	f();
}