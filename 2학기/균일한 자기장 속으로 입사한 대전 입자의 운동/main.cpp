#include <stdio.h>
#include <math.h>

int main()
{
	double q;
	double m;
	double B;
	double r;

	double v = 0;
	double Fm = 0;

	printf("���Ϸ�(q)�� �Է��Ͻÿ�: ");
	scanf_s("%lf\n", &q);

	printf("����(m)�� �Է��Ͻÿ�: ");
	scanf_s("%lf\n", &m);

	printf("�ڱ��� ����(B)�� �Է��Ͻÿ�: ");
	scanf_s("%lf\n", &B);

	printf("������(r)�� �Է��Ͻÿ�: ");
	scanf_s("%lf\n", &r);

	v = q * B / m;
	Fm = q * v * B;

	printf("�ʱ�ӷ�: %.2e m/s\n", v);
	printf("�ڱ���� ũ��: %.2e N\n", Fm);
}