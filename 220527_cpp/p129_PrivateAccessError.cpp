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


// private ���� �����ϵ��� ���� �ڵ�
int PrivateAccessError::a_getter() {
	return a;
}

PrivateAccessError::PrivateAccessError(int x, int y) :PrivateAccessError() {} // ���� ������ ���

void PrivateAccessError::h() {
	f();
}