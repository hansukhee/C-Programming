#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>



#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180  // ������ �������� ��ȯ�ϴ� ��ũ��
#define RAD2DEG(x)  x*180/M_PI   //  ������ ��׸��� ��ȯ�ϴ� ��ũ��

void Excersize_4_24(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� �Ѽ���
{
    //srand(time(NULL));

    double T3 = 150.00 +rand() % (5 + 1) - 3;
    double angle1 = 30.0 +rand() % (3 + 1) - 1;
    double angle2 = 60.0 +rand() % (3 + 1) - 1;
    double theta1 = DEG2RAD(angle1);
    double theta2 = DEG2RAD(angle2);
    double T1 = 0;
    double T2 = 0;
    double m = 0;

    printf("\n\n");
    printf("4-24 \n");
    printf("�� �ٿ� �Ŵ޷� �ִ� �����̴�.\n\n");
    printf("������ ���԰� %6.2lfN �̶�� �� �ٿ� �ۿ��ϴ� ��� T^1, T^2, T^3 �� ���϶�. \n\n", T3);


    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("������ ���԰� %6.2lfN �̶�� �� �ٿ� �ۿ��ϴ� ��� T^1, T^2, T^3 �� ���϶�. \n\n", T3);

        printf("���°����� ������ �� 2��Ģ\n");
        printf("��Fx: ���򼺺��� ��¥�� ��, ��Fy:���������� ��¥�� ��, T: ���, cos(��): ����, sin(��): ����, a: ���ӵ�, m * g: ������ ���� \n\n");

        printf("�ٰ� T1�� ���հ��� %6.2lf�� �Դϴ�.\n\n", angle1);

        printf("��ü�� �������ֱ� ���ؼ��� (��Fx, ��Fy, a) = 0�Դϴ�.\n");
        printf("�߷°��ӵ��� �Ʒ� ���� �̹Ƿ�  -9.8m/s^2 �Դϴ�.\n\n");

        printf("w = m * g\n");
        printf("  = m * 9.8m/s^2\n");
        printf("  = %6.2lfN\n\n", T3);


        printf("m = %6.2lfN / 9.8m/s^2\n", T3);
        m = T3 / 9.8;
        printf("  = %6.2lfkg\n\n", m);

        printf("��F = m * a\n");
        printf("   = m * 0\n");
        printf("   = 0\n\n");

        // ��Fx = T1 * cos(��) - T2 * cos(��) = 0
        printf(" ��Fx = T1 * sin(��) - T2 * sin(��) = m * ax\n");
        printf("     = T1 * sin(��) - T2 * sin(��) = m * 0\n");
        printf("     = 0\n\n");

        printf(" T1  = (m * g) * sin��\n");
        printf("     = %6.2lfN * sin(%6.2lf��)\n", T3, angle1);
        T1 = T3 * sin(DEG2RAD(angle1));
        printf("     = %6.2lfN\n\n", T1);

        // ��Fy = T1 * sin(��) - T2 * sin(��) - T3 = 0
        printf(" ��Fy = T1 - (m * g) * cos(��) = m * ay\n");
        printf("     = T1 - (m * g) * cos(��) = m * 0\n");
        printf("     = 0\n\n");

        printf("T2 = (m * g) * cos(��)\n");
        printf("   = T1 * cos(��)\n");
        printf("   = %6.2lfN * cos(%6.2lf��)\n",T1, angle2);
        T2 = 1.73 * T1;
        printf("   = %6.2lfN\n\n", T2);


        printf("T3�� ������ ����ִ� �� �̱� ������ %6.2lfN �Դϴ�.\n\n", T3);
        printf("T3 = %6.2lfN\n\n", T3);


        if (answer == SHOW)
        {
            printf("=========================   �� ��   =============================\n\n");

            printf("T1 = %6.2lfN\n\n", T1);

            printf("T2 = %6.2lfN\n\n", T2);

            printf("T3 = %6.2lfN\n\n", T3);

            printf("=================================================================\n\n");
        }
    }



}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 4     ========================\n");
    printf("=================================================================\n");


    Excersize_4_24(Show_Solution, Answer);
}