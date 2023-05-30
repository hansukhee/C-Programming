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
    double x = 200 + rand() % (9 + 1) - 4;
    double vavg = 0 + rand() % (9 + 1) - 4;
    double d = 0;

    printf("\n\n");
    printf("2-6 \n");
    printf("�޸��� ������ %6.2lfm Ʈ�� �ѹ����� %6.2lfs ������.\n", x, t);
    printf("���� (a) ��ռӷ°� (b) ��ռӵ��� ���Ͽ���.\n\n");
    printf("(a) ������ ��� �ӷ��� ���ϴ� ����� ������ �����ϴ� \n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    Ǯ ��   =============================\n\n");
        printf("���ð��� : vavg = ��x / ��t �Դϴ�.\n");
        printf("vavg : ��ռӷ�, ��x : �Ÿ�, ��t : �ð���ȭ��\n\n");

        printf("vavg = ��x / ��t\n");
        printf("     = (%6.2lfm) / (%6.2lfs) \n", x, t);
        vavg = x / t;
        printf("     = %6.2lfm/s\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        vavg = x / t;

        printf("vavg = %6.2lfm/s \n\n", vavg);

        printf("=================================================================\n\n");

        printf("\n\n\n");
    }

    printf("(b) ������ ��� �ӵ��� ���ϴ� ����� ������ �����ϴ�. \n\n");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    Ǯ ��   ============================\n");
        printf("���ð��� : vavg = ��d / ��t �Դϴ�. \n");
        printf("vavg : ��ռӵ�, ��d : ����, ��t : �ð���ȭ�� \n\n");

        printf("vavg = ��d / ��t\n\n");
        printf("     = (%6.2lfm) / (%6.2lfs) \n\n", d, t);
        vavg = d / t;
        printf("     = %6.2lf\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        vavg = d / t;

        printf("vavg = %6.2lf m/s \n\n", vavg);

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