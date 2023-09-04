#define _CRT_SECURE_NO_WARNINGS
#define MAX 10
#include <stdio.h>

int main()
{
	int year = 2023;
	int old = 20;

	FILE* fp;
	fp = fopen("Sunday.txt", "w");
	fprintf(fp, "This year is %d\nMy old is: %d", year, old);
	fclose(fp);

}