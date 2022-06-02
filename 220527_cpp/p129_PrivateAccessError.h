#pragma once // visual에서 사용하는 예약어
// 이미 다른 데서 한번 호출되었다면 더 이상 호출되지 않도록.

#ifndef _PrivateAccessError_H_
#define _PrivateAccessError_H_

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();

public:
	int b;
	PrivateAccessError(int x);
	void g();

	// private 접근 가능하도록 만든 코드
	int  a_getter();
	PrivateAccessError(int x, int y);
	void h();
};
#endif
