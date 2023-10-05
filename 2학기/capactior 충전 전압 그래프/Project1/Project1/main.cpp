#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
    double C, V, R;
    printf("Ŀ�н��� �뷮 (C)�� �Է��ϼ���: ");
    scanf_s("%lf", &C);
    printf("���� (V)�� �Է��ϼ���: ");
    scanf_s("%lf", &V);
    printf("���� (R)�� �Է��ϼ���: ");
    scanf_s("%lf", &R);

    FILE* file = fopen("Capacitor charging voltage graph.csv", "w");

    fprintf(file, "Time,Charge,Current\n");

    double t;
    for (t = 0.0; t <= 10.0; t += 0.1)
    {
        double Q = C * V * (1 - exp(-t / (R * C)));
        double I = (V / R) * exp(-t / (R * C));
        fprintf(file, "%.2lf,%.2lf,%.2lf\n", t, Q, I);
    }

    fclose(file);
    printf("Excel ������ �����Ǿ����ϴ�.\n");
}