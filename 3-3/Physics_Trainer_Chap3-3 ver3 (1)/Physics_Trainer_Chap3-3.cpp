#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
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
    printf("한 변위의 크기가 %6.2lfm 이고 방향이 %6.2lf° 라고 한다.\n", m, angle);
    printf("이 변위의 x 성분과 y 성분을 구하시오. \n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    풀 이   =============================\n");

        printf("이 변위의 x 성분을 구하시오.\n");
        printf("관련 공식은 x = m * cosΘ 입니다.\n");
        printf("x: 변위, m: 거리, cosΘ: x성분\n\n");

        printf("x = %6.2lfm * cos(%6.2lf°)  \n", m, angle);
        printf("  = %6.2lfm\n\n", x);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("x = %6.2lfm \n\n", x);

    }

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================    풀 이   ============================\n");
        printf("이 변위의 y 성분을 구하시오.\n");
        printf("관련 공식은 y = m * sinΘ 입니다.\n");
        printf("y: 변위, m: 거리, sinΘ: y성분\n\n"); \

        printf("y  = %6.2lfm * sin(%6.2lf°) \n", m, angle);
        printf("   = %6.2lfm \n\n", y);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

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