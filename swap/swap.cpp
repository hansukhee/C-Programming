#include <stdio.h>

void swap(int* p, int* p1)
{
	int temp;
	temp = *p;
	*p = *p1;
	*p1 = temp;
}

void main()
{
	int a = 5;
	int b = 10;

	printf("���� ���� a�� ��: %d, b�� ��: %d\n", a, b);
	swap(&a, &b);
	printf("���� ���� a�� ��: %d, b�� ��: %d\n", a, b);
}