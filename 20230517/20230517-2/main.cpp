#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_integer(void)
{
	int n;

	do
	{
		printf("���� ������ �Է��Ͻÿ�: ");
		scanf("%d", &n);
	} while (n <= 0);

	return n;
}

int is_prime(int n)
{
	int i, j, num;

	for (i = 1; i < n; i++)
	{
		for (j = 1; j < i; i++)
		{
			if (i % j == 0)
				printf("%d", &num);
		}
	}
	return num;
}

int main(void)
{
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("�Ҽ��Դϴ�. \n", n);
	else
		printf("�Ҽ��� �ƴմϴ�\n", n);

}