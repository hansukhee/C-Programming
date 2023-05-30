#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
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
    printf("달리기 선수가 %6.2lfm 트랙 한바퀴를 %6.2lfs 에돈다.\n", x, t);
    printf("선수 (a) 평균속력과 (b) 평균속도를 구하여라.\n\n");
    printf("(a) 선수의 평균 속력을 구하는 방법은 다음과 같습니다 \n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    풀 이   =============================\n\n");
        printf("관련공식 : vavg = Δx / Δt 입니다.\n");
        printf("vavg : 평균속력, Δx : 거리, Δt : 시간변화량\n\n");

        printf("vavg = Δx / Δt\n");
        printf("     = (%6.2lfm) / (%6.2lfs) \n", x, t);
        vavg = x / t;
        printf("     = %6.2lfm/s\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        vavg = x / t;

        printf("vavg = %6.2lfm/s \n\n", vavg);

        printf("=================================================================\n\n");

        printf("\n\n\n");
    }

    printf("(b) 선수의 평균 속도를 구하는 방법은 다음과 같습니다. \n\n");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    풀 이   ============================\n");
        printf("관련공식 : vavg = Δd / Δt 입니다. \n");
        printf("vavg : 평균속도, Δd : 변위, Δt : 시간변화량 \n\n");

        printf("vavg = Δd / Δt\n\n");
        printf("     = (%6.2lfm) / (%6.2lfs) \n\n", d, t);
        vavg = d / t;
        printf("     = %6.2lf\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

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