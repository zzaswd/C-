//	1. argc, argv의 역할
//  2. 배열 초기화 시 NULL 값
//  3. 버퍼 오버 플로우
//	4. strcat 반환 값
//	5. my_strcpy
#include <stdio.h>
#include "my_str.h"


int main_str(int argc, char*argv[]) {
	char fruit[80] = "straw";
	char fruit1[80] = { 's','t','r','a','w' };
	char fruit2[80];
	fruit2[0] = 's'; fruit2[1] = 'a'; fruit2[2] = 'r'; fruit2[3] = 'a'; fruit2[4] = 'w';
	fruit2[5] = '\0';

	int idx = 0;
	while (1) {
		if (*(argv+idx)== NULL) break;
		printf("argv[%d] value = %s\n", idx++,*(argv+idx-1));
	}
	
	my_strcat(fruit, "berry");
	my_strcpy(fruit1, "abc");
	printf("%s\n", fruit);
	printf("%s\n", fruit1);
	
	
	//printf("%s\n", my_strcat(fruit, "berry"));

	/*
	for (int idx = 0; idx < argc; idx++) {
		printf("argv[%d] Pointer = %x\t", idx, argv[idx]);
		printf("argv[%d] value = %s\n", idx, argv[idx]);
	}*/

	return 0;
}