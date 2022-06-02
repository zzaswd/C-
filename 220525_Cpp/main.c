#include <stdio.h>
#include "my_strcat.h"


void my_str(char* str1, char* str2) { // 내가 작성한 strcat
	
	int idx = 0;
	while (str1[idx] != '\0') idx++;

	int jdx = 0;
	while (str2[jdx] != '\0') {
		str1[idx] = str2[jdx];
		idx++;
		jdx++;
	}

	str1[idx] = '\0';
}


int main(int argc,char *argv[]) { 
	int num1 = 0;
	int num2 = 1;

	char ch0 = 'a';
	int num3 = 2;
	printf("%d\n", ch0);
	int* p = &num3;
	printf("%d\n", *(p + 3));
	char fruit[80] = "apple";
	printf("%d\n", sizeof(fruit) / sizeof(fruit[0]));
	printf("%s\n", fruit);
	my_str(fruit, "berry");
	printf("%s\n", fruit);
	my_strcat(fruit, "berry");
	printf("%s\n", fruit);

	return 0;

}
