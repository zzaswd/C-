#pragma once // visual���� ����ϴ� �����
// �̹� �ٸ� ���� �ѹ� ȣ��Ǿ��ٸ� �� �̻� ȣ����� �ʵ���.

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

	// private ���� �����ϵ��� ���� �ڵ�
	int  a_getter();
	PrivateAccessError(int x, int y);
	void h();
};
#endif
