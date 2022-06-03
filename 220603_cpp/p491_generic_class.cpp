#if 0

#include <iostream>
using namespace std;

template <class T>
class MyStack {
	int tos;// top of stack
	T data[100]; // T Ÿ���� �迭. ������ ũ��� 100
public:
	MyStack();
	void push(T element); // T Ÿ�� ���� element�� data [] �迭�� ����
	T pop(); //  ������ ž�� �ִ� �����͸� data[] �迭���� ����
};

template <class T>
MyStack<T>::MyStack() { // ������
	tos = -1; // ������ ��� ����
}

template <class T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty";
		return 0; // ���� ǥ��
	}
	retData = data[tos--];
	return retData;
}

int main() {
	MyStack<int> iStack; // int �� ������ �� �ִ� ���� ����
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack; // double �� ������ �� �ִ� ���� ����
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>(); // char �� ������ �� �ִ� ���� ����
	p->push('a');
	cout << p->pop() << endl;
	delete p;
}

#endif