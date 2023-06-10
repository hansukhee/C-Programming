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


void Excersize_3_23(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� �Ѽ���
{
    srand(time(NULL));

    double y0 = 140.0;// +rand() % (3 + 1) - 2;    // ������ ���� (m)
    double y = 0;                                   // ���� ��ġ
    double angle = 37.0;// +rand() % (2 + 1) - 2;     // �߻簢 (��)
    double v0 = 100.0;// +rand() % (4 + 1) - 2;     // �ʼӵ� (m/s)
    double g = 9.8;                                 // �߷°��ӵ� (m/s^2)
    double v0y1 = 0;
    // (a)

    double t = (v0 * sin(angle) + sqrt(pow(v0 * sin(angle), 2) + 2 * g * y0)) / g;

    // (b)
    double ��x = 0;  //m

    // (c)
    double v0x = v0 * cos(DEG2RAD(angle)) * t;  // m/s
    double v0y = v0 * sin(DEG2RAD(angle));  // m/s
    double v = 0;

    // (d)
    double �� = 0;    //m/s
    double tan1 = 0;
    double ��_rad = 0;
    double radtodeg = M_PI / 180;




    // (a)
    double a = 0.5 * (-g);  // 2�� ������
    double b = v0y;         // 2�� ������
    double c = y0;          // 2�� ������
    double d = 0;           // 2�� ������
    double e = 0;           // 2�� ������



    printf("\n\n");
    printf("3-23 \n");
    printf("���鿡���� ���̰� %6.2lfm�� ���� ������ ������ %6.2lf���� ���� �̷�鼭 \n", y0, angle);
    printf("%6.2lfm/s�� �ʼӵ��� ����ü�� �߻�Ǿ���. \n\n", v0);
    printf("(a) ����ü�� ���鿡 �ִ� �� P�� �浹�� ������ �ɸ� �ð��� ���϶�.\n\n");
    printf("(b) ���� �Ʒ��κ��� ����Ÿ� x�� ���϶�. \n\n");
    printf("(c) ����ü�� �� P�� �ε�ġ�� ������ �ӵ��� ���򼺺а� ���������� ���϶�.\n\n");
    printf("(d) �ӵ��� ũ�⸦ ���϶�.\n\n");

    if (solution == SHOW)
    {
        d = b * b - 4.0 * a * c;
        e = sqrt(d);
        t = (-b - e) / (2.0 * a);
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ����ü�� ���鿡 �ִ� �� P�� �浹�� ������ �ɸ� �ð��� ���϶�.\n\n");
        printf("���� ������ y = y0 + v0y * t + 1/2 * a * t^2\n");
        printf("y: ������ġ, y0: ó����ġ, v0y: ó���ӵ�, t: �ð�, a: ���ӵ�\n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� %6.2lfm/s^2 �Դϴ�.\n\n", -g);
        printf("     y  = v0 * sin�� * t + 1/2 * (-g) * t^2 + y0\n");
        printf("%6.2lfm = (%6.2lfm/s * sin(%6.2lf��) * t) + (1/2 * (%6.2lfm/s^2) * t^2) + %6.2lfm\n\n", y, v0, angle, -g, y0);
        printf("  at^2 + bt + c = 0 \n");
        printf("((%6.2lfm/s^2) * t^2) + (%6.2lfm/s * t) + %6.2lfm = 0\n\n", a, v0y, c);
        printf("t = %6.2lfs, %6.2lfs\n\n", (-b - e) / (2.0 * a), (-b + e) / (2.0 * a));


        if (answer == SHOW)
        {
            printf("=========================   �� ��   =============================\n\n");

            printf("t = %6.2lfs (t > 0)\n\n", t);
        }
    }

    if (solution == SHOW)
    {
        ��x = v0 * cos(DEG2RAD(angle)) * t;
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ���� �Ʒ��κ��� ����Ÿ� x�� ���϶�. \n\n");
        printf("���� ������ ��x =  v0 * cos�� * t \n");
        printf("��x: �Ÿ���ȭ��, v0: ó���ӵ�, cos��: �ﰢ�Լ������� x����, t: �ð�\n\n");
        printf("��x = v0 * cos�� * t \n");
        printf("   = (%6.2lfm/s * cos(%6.2lf��) * %6.2lfs)\n", v0, angle, t);
        printf("   = %6.2lfm \n\n", ��x);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��x = %6.2lfm\n\n", ��x);
    }

    if (solution == SHOW)
    {
        v0x = v0 * cos(DEG2RAD(angle));
        v0y1 = v0 * sin(DEG2RAD(angle)) - (g * t);
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(c) ����ü�� �� P�� �ε�ġ�� ������ �ӵ��� ���򼺺а� ���������� ���϶�.\n\n");
        printf("���� ������ v0x = v0 * cos��\n");
        printf("v0x: ���򼺺�, v0: �ʱ� �ӵ�, cos��: �ﰢ�Լ������� x����\n\n");
        printf("���� ������ v0y = v0 * sin�� - (g * t)\n");
        printf("v0y: ��������, v0: �ʱ� �ӵ�, sin��: �ﰢ�Լ������� y����, g: �߷°��ӵ�, t: �ð�\n\n");
        printf("v0x = (v0 * cos��)\n");
        printf("    = (%6.2lfm/s * cos(%6.2lf��))\n", v0, angle);
        printf("    = % 6.2lfm/s \n\n", v0x);
        printf("v0y = (v0 * sin��) - (g * t)\n");
        printf("    = (%6.2lfm/s * sin(%6.2lf��)) - (%6.2lfm/s^2 * %6.2lfs) \n", v0, angle, g, t);
        printf("    = %6.2lfm/s \n\n", v0y1);


    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("v0x = %6.2lfm/s\n\n", v0x);

        printf("v0y = %6.2lfm/s\n\n", v0y1);
    }

    if (solution == SHOW)
    {
        v = sqrt((v0x * v0x) + (v0y1 * v0y1));
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(d) �ӵ��� ũ�⸦ ���϶�.\n\n");
        printf("���ð����� v = ��((v0x)^2 + (v0y)^2)\n");
        printf("v: �ӵ��� ũ��, v0x: ���򼺺�, v0y: ��������\n\n");
        printf("v = ��((v0x)^2 + (v0y)^2)\n");
        printf("  = ��((%6.2lfm/s)^2 + (%6.2lfm/s)^2) \n", v0x, v0y1);
        printf("  = %6.2lfm/s \n\n", v);



    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("v = %6.2lfm/s\n\n", v);

        printf("=================================================================\n\n");
    }
}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 3     ========================\n");
    printf("=================================================================\n");


    Excersize_3_23(Show_Solution, Answer);
}