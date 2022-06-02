#include <stdio.h>


struct Student {
	int number;
	char name[10];
	double score;
};
typedef struct Student student;


void print_struct(student* st) {

	for (int idx = 0; idx < 2; idx++) {
		//printf("%2d %2s %.1lf\n", st[idx].number, st[idx].name, st[idx].score);
		//printf("%2d %2s %.1lf\n", (*st).number, (*st).name, (*st).score);
		printf("%2d %2s %.1lf\n", st->number, st->name, st->score);
		st++;
	}
}

void change_name(student* st) {
	for (int idx = 0; idx < 2; idx++) {
		for (int jdx = 0; jdx < sizeof(st[idx].name) / sizeof(st[idx].name[0]); jdx++) {
			if (st[idx].name[jdx] >= 'A' && st[idx].name[jdx] <= 'Z')
				st[idx].name[jdx] = st[idx].name[jdx] + 32;
		}
	}
}
int main_struct_restudy(int argc, char* argv[]) {
	
	student st[2] = { { 1, "ABC", 85.5 } ,{2, "DEF", 90.5 } };
	
	change_name(st);
	print_struct(st);

	return 0;
}