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

    double t = 6.0 + rand() % (9 + 1) - 4;
    double x = 60.0 + rand() % (9 + 1) - 4;
    double vavg = 10.0 + rand() % (9 + 1) - 4;
    double s = 2.0 + rand() % (9 + 1) - 4;
    double m = 30.0 + rand() % (9 + 1) - 4;
    double v = 0.0 + rand() % (9 + 1) - 4;

    printf("\n\n");
    printf("2-4 \n");
    printf("����� ���� �����ϰ� �ִ� ��ü�� ���ʹ������� ������� �� ��\n\n");
    printf("�̵��Ÿ��� �ð��� ���谡 �׸� P2-4�� ����. \n\n");
    printf("(a) ����Ͽ� %6.2lf s ���� ��ü�� ��ռӷ��� �� m/s�ΰ�?(�̵��Ÿ��� %6.2lf �϶� �ð��� %6.2lf �Դϴ�.) \n", t, t, x);

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================    Ǯ ��   =============================\n\n");
        printf("���� ������ : vavg = ��x / ��t�Դϴ�. \n\n");
        printf("vavg : ��ռӷ�, ��x  : ����, ��t : �ð���ȭ��\n");
        printf("vavg = (%6.2lfm - 0m) / (%6.2lfs - 0s)\n\n", x, t);

        printf("vavg = ��x / ��t \n");
        printf("     = (%6.2lfm  - 0m) / (%6.2lfs - 0s) \n", x, t);
        vavg = x / t;
        printf("     = %6.2lf m/s\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        vavg = x / t;
        printf("vavg = % 6.2lf m/s \n\n", vavg);

        printf("=================================================================\n\n");
    }

    printf("(b) ��� �� 5 s ���� �����ӷ��� �� m/s �ΰ�? \n\n");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    Ǯ ��   ============================\n");
        printf("���� ������ : v = ��x / ��t �Դϴ�. \n\n");
        printf("v : �����ӷ�, ��x : �Ÿ�, ��t : �ð�\n");
        printf("v = (%6.2lfm - 0m) / (%6.2lfs - 0s)\n\n", m, s);

        printf("v = ��x / ��t\n");
        printf("  = (%6.2lfm - 0m) / (%6.2lfs - 0s) \n", m, s);
        v = m / s;
        printf("  = %6.2lf m/s\n\n", v);

    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        v = m / s;
        printf("v = %6.2lfm/s \n\n", v);
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