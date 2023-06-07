#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI

void Excersize_3_3(int solution, int answer)
{
    double angle = 210 + rand() % (5 + 1) - 3;
    double m = 30 + rand() % (5 + 1) - 3;

    double x = (m) * cos(DEG2RAD(angle));
    double y = (m) * sin(DEG2RAD(angle));

    printf("\n\n");
    printf("3-3 \n");
    printf("�� ������ ũ�Ⱑ %6.2lfm �̰� ������ %6.2lf�� ��� �Ѵ�.\n", m, angle);
    printf("�� ������ x ���а� y ������ ���Ͻÿ�. \n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    Ǯ ��   =============================\n");

        printf("�� ������ x ������ ���Ͻÿ�.\n");
        printf("���� ������ x = m * cos�� �Դϴ�.\n");
        printf("x: ����, m: �Ÿ�, cos��: x����\n\n");

        printf("x = %6.2lfm * cos(%6.2lf��)  \n", m, angle);
        printf("  = %6.2lfm\n\n", x);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("x = %6.2lfm \n\n", x);

    }

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================    Ǯ ��   ============================\n");
        printf("�� ������ y ������ ���Ͻÿ�.\n");
        printf("���� ������ y = m * sin�� �Դϴ�.\n");
        printf("y: ����, m: �Ÿ�, sin��: y����\n\n"); \

        printf("y  = %6.2lfm * sin(%6.2lf��) \n", m, angle);
        printf("   = %6.2lfm \n\n", y);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("y  = %6.2lfm \n\n", y);

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


    Excersize_3_3(1, 1);
}