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

void Excersize_2_6(int solution, int answer)
{

	srand(time(NULL));

	double t = 25 + rand() % (9 + 1) - 4;
	double s = 200 + rand() % (9 + 1) - 4;
	double averge_speed = 0 + rand() % (9 + 1) - 4;
	double d = 0;
	double averge_velocity = 0;

	printf("\n\n");
	printf("2-6 \n");
	printf("�޸��� ������ %6.2lf m Ʈ�� �ѹ����� %6.2lf s �� ����.\n", s, t);
	printf("���� (a) ��ռӷ°� (b) ��ռӵ��� ���Ͽ���.\n\n");
	printf("(a) ��� �ӷ��� ���ϴ� ����� ������ �����ϴ� \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   =============================\n");
		printf("���ð����� ��ռӷ� = �Ÿ�(��s) / �ð�(��s) �Դϴ�.\n");
		printf("������ ��ռӷ��� ���ϴ� ������ ������ �����ϴ�.\n\n");

		printf("������ ��ռӷ��� ������ �����ϴ�: averge_speed = ��s / ��t = %6.2lf s / %6.2lf m \n\n", s, t);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		averge_speed = s / t;

		printf("averge_speed = %6.2lf m/s \n\n", averge_speed);

		printf("=================================================================\n\n");

		printf("\n\n\n");
	}

	printf("(b) ������ ��� �ӵ��� ���Ͽ���. \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   ============================\n");
		printf("���ð����� averge_velocity = ���� (��d) / �ð� (��t) �Դϴ�. \n");
		printf("������ ��ռӵ��� ���ϴ� ������ ������ �����ϴ�.\n\n");

		printf("averge_velocity = ��d / ��t = %6.2lf / %6.2lf \n\n", d, t);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		averge_velocity = d / t;

		printf("averge_velocity = %6.2lf m/s \n", averge_velocity);

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


	Excersize_2_6(1, 1);
}