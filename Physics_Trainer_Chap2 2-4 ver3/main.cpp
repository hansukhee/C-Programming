#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_4(int solution, int answer)
{

	srand(time(NULL));

	double t = 6;
	double x = 60;
	double Ev = 10;
	double s = 2;
	double m = 30;
	double v = 0;

	printf("\n\n");
	printf("2-4 \n");
	printf("����� ���� �����ϰ� �ִ� ��ü�� ���ʹ������� ������� �� ��\n");
	printf("�̵��Ÿ��� �ð��� ���谡 �׸� P2-4�� ����. \n");
	printf("(a) ����Ͽ� %6.2lf s ���� ��ü�� ��ռӷ��� �� m/s�ΰ�?(�̵��Ÿ��� %6.2lf �϶� �ð��� %6.2lf �Դϴ�.) \n\n", t, t, x);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   =============================\n");
		printf("���ð����� ��ռӷ�(m/s) = �ð�(s) / �Ÿ�(m) �Դϴ�. \n");

		printf("t�� 0�̶�� �ϸ� x�� 0�� �˴ϴ�. \n");
		printf("t�� %6.2lf �̸� %6.2lf ���� ������ ��ǥ�踦 ���� x�� %6.2lf ���η� ���;ҽ��ϴ�.", t, t, x);

		printf("%6.2lf s ���� ��ü�� ��ռӷ��� ������ �����ϴ�.\n\n", t);

		printf("Ev = ��s / ��t =  %6.2lf s  - 0 s / %6.2lf  m - 0 m \n", t, x);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		Ev = x / t;
		printf("Ev = %6.2lf m/s \n\n", Ev);
		printf("=================================================================\n\n");
		printf("\n\n\n");
	}

	printf("(b) ��� �� 5 s ���� �����ӷ��� �� m/s �ΰ�? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n");
		printf("���ð����� �����ӷ�(m/s) = �ð�(s) / �Ÿ�(m) �Դϴ�. \n");
		printf("��� �� 5s �϶��� �����ӷ��� �����������ϴ�.\n\n");

		printf("v = 5m - 3m / %6.2lf s - 0 s \n", m);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		v = m / s;
		printf("v = %6.2lf m/s \n\n", v);
		printf("=================================================================\n\n");
		printf("\n\n\n");
	}

}
int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_4(1, 1);
}