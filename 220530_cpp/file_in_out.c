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
	wfp = fopen("st.db", "w");//st.db라는 이름으로 write하겠다. 

	if (wfp == NULL) { // 제대로 출력하지 못하면 NULL 반환, 성공하면 그 파일의 주소 반환
		fputs("st.db 파일을 열 수 없습니다.\n", stdout); // printf 함수는 무거운 함수. 문자 변환 없이 간단한 문자열만 추출한다면 fputs.
		// stdout은 모니터에 출력해라 라는 것.
		exit(1);
	}
	fwrite(st, sizeof(student), 2, wfp);	//파일 저장,    한번에 저장할 사이즈, 그것을 몇번 할거냐, 파일 포인터
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
	wfp = fopen("st.db", "w");//st.db라는 이름으로 write하겠다. 

	if (wfp == NULL) { // 제대로 출력하지 못하면 NULL 반환, 성공하면 그 파일의 주소 반환
		fputs("st.db 파일을 열 수 없습니다.\n", stdout); // printf 함수는 무거운 함수. 문자 변환 없이 간단한 문자열만 추출한다면 fputs.
		// stdout은 모니터에 출력해라 라는 것.
		exit(1);
	}
	fwrite(st, sizeof(student), 2, wfp);	//파일 저장,    한번에 저장할 사이즈, 그것을 몇번 할거냐, 파일 포인터
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
	wfp = fopen("st.db", "w");//st.db라는 이름으로 write하겠다. 

	if (wfp == NULL) { // 제대로 출력하지 못하면 NULL 반환, 성공하면 그 파일의 주소 반환
		fputs("st.db 파일을 열 수 없습니다.\n", stdout); // printf 함수는 무거운 함수. 문자 변환 없이 간단한 문자열만 추출한다면 fputs.
		// stdout은 모니터에 출력해라 라는 것.
		exit(1);
	}
	fwrite(st, sizeof(student), 2, wfp);	//파일 저장,    한번에 저장할 사이즈, 그것을 몇번 할거냐, 파일 포인터
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
	wfp = fopen("st.db", "w");//st.db라는 이름으로 write하겠다. 

	if (wfp == NULL) { // 제대로 출력하지 못하면 NULL 반환, 성공하면 그 파일의 주소 반환
		fputs("st.db 파일을 열 수 없습니다.\n", stdout); // printf 함수는 무거운 함수. 문자 변환 없이 간단한 문자열만 추출한다면 fputs.
		// stdout은 모니터에 출력해라 라는 것.
		exit(1);
	}
	fwrite(st, sizeof(student), 2, wfp);	//파일 저장,    한번에 저장할 사이즈, 그것을 몇번 할거냐, 파일 포인터
}


int main_in_out(void) {
	student st[2] = { {1,"ABC",85.0},{2,"DEF",90.0} };
	save_st(st);

	return 0;
>>>>>>> 603b48ffec7aa533bb43ac8f75aa278c8fbda364
}