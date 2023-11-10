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

	printf("전하량(q)를 입력하시오: ");
	scanf_s("%lf\n", &q);

	printf("질량(m)을 입력하시오: ");
	scanf_s("%lf\n", &m);

	printf("자기장 세기(B)를 입력하시오: ");
	scanf_s("%lf\n", &B);

	printf("반지름(r)을 입력하시오: ");
	scanf_s("%lf\n", &r);

	v = q * B / m;
	Fm = q * v * B;

	printf("초기속력: %.2e m/s\n", v);
	printf("자기력의 크기: %.2e N\n", Fm);
}