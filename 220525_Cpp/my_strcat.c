

void my_strcat(char* str1, char* str2) { // å�� �ִ� �ڵ�
	char* temp = str1;

	while (*str1 != '\0') str1++;

	while (*str2 != '\0') {
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
}