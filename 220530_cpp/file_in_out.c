<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)
typedef struct Student {
	int number;
	char name[10];
	double score;
}student;

void save_st(student* st) {
	FILE* wfp; // write File Pointer
	wfp = fopen("st.db", "w");//st.db��� �̸����� write�ϰڴ�. 

	if (wfp == NULL) { // ����� ������� ���ϸ� NULL ��ȯ, �����ϸ� �� ������ �ּ� ��ȯ
		fputs("st.db ������ �� �� �����ϴ�.\n", stdout); // printf �Լ��� ���ſ� �Լ�. ���� ��ȯ ���� ������ ���ڿ��� �����Ѵٸ� fputs.
		// stdout�� ����Ϳ� ����ض� ��� ��.
		exit(1);
	}
	fwrite(st, sizeof(student), 2, wfp);	//���� ����,    �ѹ��� ������ ������, �װ��� ��� �Ұų�, ���� ������
}


int main_in_out(void) {
	student st[2] = { {1,"ABC",85.0},{2,"DEF",90.0} };
	save_st(st);

	return 0;
=======
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)
typedef struct Student {
	int number;
	char name[10];
	double score;
}student;

void save_st(student* st) {
	FILE* wfp; // write File Pointer
	wfp = fopen("st.db", "w");//st.db��� �̸����� write�ϰڴ�. 

	if (wfp == NULL) { // ����� ������� ���ϸ� NULL ��ȯ, �����ϸ� �� ������ �ּ� ��ȯ
		fputs("st.db ������ �� �� �����ϴ�.\n", stdout); // printf �Լ��� ���ſ� �Լ�. ���� ��ȯ ���� ������ ���ڿ��� �����Ѵٸ� fputs.
		// stdout�� ����Ϳ� ����ض� ��� ��.
		exit(1);
	}
	fwrite(st, sizeof(student), 2, wfp);	//���� ����,    �ѹ��� ������ ������, �װ��� ��� �Ұų�, ���� ������
}


int main_in_out(void) {
	student st[2] = { {1,"ABC",85.0},{2,"DEF",90.0} };
	save_st(st);

	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)
typedef struct Student {
	int number;
	char name[10];
	double score;
}student;

void save_st(student* st) {
	FILE* wfp; // write File Pointer
	wfp = fopen("st.db", "w");//st.db��� �̸����� write�ϰڴ�. 

	if (wfp == NULL) { // ����� ������� ���ϸ� NULL ��ȯ, �����ϸ� �� ������ �ּ� ��ȯ
		fputs("st.db ������ �� �� �����ϴ�.\n", stdout); // printf �Լ��� ���ſ� �Լ�. ���� ��ȯ ���� ������ ���ڿ��� �����Ѵٸ� fputs.
		// stdout�� ����Ϳ� ����ض� ��� ��.
		exit(1);
	}
	fwrite(st, sizeof(student), 2, wfp);	//���� ����,    �ѹ��� ������ ������, �װ��� ��� �Ұų�, ���� ������
}


int main_in_out(void) {
	student st[2] = { {1,"ABC",85.0},{2,"DEF",90.0} };
	save_st(st);

	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
=======
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)
typedef struct Student {
	int number;
	char name[10];
	double score;
}student;

void save_st(student* st) {
	FILE* wfp; // write File Pointer
	wfp = fopen("st.db", "w");//st.db��� �̸����� write�ϰڴ�. 

	if (wfp == NULL) { // ����� ������� ���ϸ� NULL ��ȯ, �����ϸ� �� ������ �ּ� ��ȯ
		fputs("st.db ������ �� �� �����ϴ�.\n", stdout); // printf �Լ��� ���ſ� �Լ�. ���� ��ȯ ���� ������ ���ڿ��� �����Ѵٸ� fputs.
		// stdout�� ����Ϳ� ����ض� ��� ��.
		exit(1);
	}
	fwrite(st, sizeof(student), 2, wfp);	//���� ����,    �ѹ��� ������ ������, �װ��� ��� �Ұų�, ���� ������
}


int main_in_out(void) {
	student st[2] = { {1,"ABC",85.0},{2,"DEF",90.0} };
	save_st(st);

	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
}