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
    printf("수평면 위에 정지하고 있던 물체가 한쪽방향으로 직선운동을 할 때\n\n");
    printf("이동거리와 시간의 관계가 그림 P2-4와 같다. \n\n");
    printf("(a) 출발하여 %6.2lf s 동안 물체의 평균속력은 몇 m/s인가?(이동거리가 %6.2lf 일때 시간은 %6.2lf 입니다.) \n", t, t, x);

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================    풀 이   =============================\n\n");
        printf("관련 공식은 : vavg = Δx / Δt입니다. \n\n");
        printf("vavg : 평균속력, Δx  : 변위, Δt : 시간변화량\n");
        printf("vavg = (%6.2lfm - 0m) / (%6.2lfs - 0s)\n\n", x, t);

        printf("vavg = Δx / Δt \n");
        printf("     = (%6.2lfm  - 0m) / (%6.2lfs - 0s) \n", x, t);
        vavg = x / t;
        printf("     = %6.2lf m/s\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        vavg = x / t;
        printf("vavg = % 6.2lf m/s \n\n", vavg);

        printf("=================================================================\n\n");
    }

    printf("(b) 출발 후 5 s 때의 순간속력은 몇 m/s 인가? \n\n");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    풀 이   ============================\n");
        printf("관련 공식은 : v = Δx / Δt 입니다. \n\n");
        printf("v : 순간속력, Δx : 거리, Δt : 시간\n");
        printf("v = (%6.2lfm - 0m) / (%6.2lfs - 0s)\n\n", m, s);

        printf("v = Δx / Δt\n");
        printf("  = (%6.2lfm - 0m) / (%6.2lfs - 0s) \n", m, s);
        v = m / s;
        printf("  = %6.2lf m/s\n\n", v);

    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
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