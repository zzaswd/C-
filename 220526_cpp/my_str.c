#include<stdio.h>

char* my_strcat(char* pd, const char* ps) {
	static char temp[10] = "hello";
	char* po = 0;
	while (*pd != NULL) pd++;

	while (*ps != NULL) {
		*pd++ = *ps++;
	}

	*pd = NULL;

	return temp;
}

char* my_strcpy(char* pd, char* ps) {
	char* po = pd;
	while ((*pd++ = *ps++) != '\0');
		
	return po;
}