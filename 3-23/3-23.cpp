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


void Excersize_3_23(int solution, int answer) //한라대학교 미래모빌리티공학과 한석희
{
    srand(time(NULL));

    double y0 = 140.0;// +rand() % (3 + 1) - 2;    // 절벽의 높이 (m)
    double y = 0;                                   // 나중 위치
    double angle = 37.0;// +rand() % (2 + 1) - 2;     // 발사각 (˚)
    double v0 = 100.0;// +rand() % (4 + 1) - 2;     // 초속도 (m/s)
    double g = 9.8;                                 // 중력가속도 (m/s^2)
    double v0y1 = 0;
    // (a)

    double t = (v0 * sin(angle) + sqrt(pow(v0 * sin(angle), 2) + 2 * g * y0)) / g;

    // (b)
    double Δx = 0;  //m

    // (c)
    double v0x = v0 * cos(DEG2RAD(angle)) * t;  // m/s
    double v0y = v0 * sin(DEG2RAD(angle));  // m/s
    double v = 0;

    // (d)
    double θ = 0;    //m/s
    double tan1 = 0;
    double θ_rad = 0;
    double radtodeg = M_PI / 180;




    // (a)
    double a = 0.5 * (-g);  // 2차 방정식
    double b = v0y;         // 2차 방정식
    double c = y0;          // 2차 방정식
    double d = 0;           // 2차 방정식
    double e = 0;           // 2차 방정식



    printf("\n\n");
    printf("3-23 \n");
    printf("지면에서의 높이가 %6.2lfm인 절벽 끝에서 수평면과 %6.2lf˚의 각을 이루면서 \n", y0, angle);
    printf("%6.2lfm/s의 초속도로 포사체가 발사되었다. \n\n", v0);
    printf("(a) 포사체가 지면에 있는 점 P에 충돌할 때까지 걸린 시간을 구하라.\n\n");
    printf("(b) 절벽 아래로부터 수평거리 x를 구하라. \n\n");
    printf("(c) 포사체가 점 P에 부딪치기 직전의 속도의 수평성분과 수직성분을 구하라.\n\n");
    printf("(d) 속도의 크기를 구하라.\n\n");

    if (solution == SHOW)
    {
        d = b * b - 4.0 * a * c;
        e = sqrt(d);
        t = (-b - e) / (2.0 * a);
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 포사체가 지면에 있는 점 P에 충돌할 때까지 걸린 시간을 구하라.\n\n");
        printf("관련 공식은 y = y0 + v0y * t + 1/2 * a * t^2\n");
        printf("y: 나중위치, y0: 처음위치, v0y: 처음속도, t: 시간, a: 가속도\n\n");
        printf("중력가속도는 아래 방향이므로 %6.2lfm/s^2 입니다.\n\n", -g);
        printf("     y  = v0 * sinθ * t + 1/2 * (-g) * t^2 + y0\n");
        printf("%6.2lfm = (%6.2lfm/s * sin(%6.2lf°) * t) + (1/2 * (%6.2lfm/s^2) * t^2) + %6.2lfm\n\n", y, v0, angle, -g, y0);
        printf("  at^2 + bt + c = 0 \n");
        printf("((%6.2lfm/s^2) * t^2) + (%6.2lfm/s * t) + %6.2lfm = 0\n\n", a, v0y, c);
        printf("t = %6.2lfs, %6.2lfs\n\n", (-b - e) / (2.0 * a), (-b + e) / (2.0 * a));


        if (answer == SHOW)
        {
            printf("=========================   정 답   =============================\n\n");

            printf("t = %6.2lfs (t > 0)\n\n", t);
        }
    }

    if (solution == SHOW)
    {
        Δx = v0 * cos(DEG2RAD(angle)) * t;
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 절벽 아래로부터 수평거리 x를 구하라. \n\n");
        printf("관련 공식은 Δx =  v0 * cosθ * t \n");
        printf("Δx: 거리변화량, v0: 처음속도, cosθ: 삼각함수에서의 x성분, t: 시간\n\n");
        printf("Δx = v0 * cosθ * t \n");
        printf("   = (%6.2lfm/s * cos(%6.2lf°) * %6.2lfs)\n", v0, angle, t);
        printf("   = %6.2lfm \n\n", Δx);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx = %6.2lfm\n\n", Δx);
    }

    if (solution == SHOW)
    {
        v0x = v0 * cos(DEG2RAD(angle));
        v0y1 = v0 * sin(DEG2RAD(angle)) - (g * t);
        printf("=========================   풀 이   =============================\n\n");
        printf("(c) 포사체가 점 P에 부딪치기 직전의 속도의 수평성분과 수직성분을 구하라.\n\n");
        printf("관련 공식은 v0x = v0 * cosθ\n");
        printf("v0x: 수평성분, v0: 초기 속도, cosθ: 삼각함수에서의 x성분\n\n");
        printf("관련 공식은 v0y = v0 * sinθ - (g * t)\n");
        printf("v0y: 수직성분, v0: 초기 속도, sinθ: 삼각함수에서의 y성분, g: 중력가속도, t: 시간\n\n");
        printf("v0x = (v0 * cosθ)\n");
        printf("    = (%6.2lfm/s * cos(%6.2lf°))\n", v0, angle);
        printf("    = % 6.2lfm/s \n\n", v0x);
        printf("v0y = (v0 * sinθ) - (g * t)\n");
        printf("    = (%6.2lfm/s * sin(%6.2lf°)) - (%6.2lfm/s^2 * %6.2lfs) \n", v0, angle, g, t);
        printf("    = %6.2lfm/s \n\n", v0y1);


    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("v0x = %6.2lfm/s\n\n", v0x);

        printf("v0y = %6.2lfm/s\n\n", v0y1);
    }

    if (solution == SHOW)
    {
        v = sqrt((v0x * v0x) + (v0y1 * v0y1));
        printf("=========================   풀 이   =============================\n\n");
        printf("(d) 속도의 크기를 구하라.\n\n");
        printf("관련공식은 v = √((v0x)^2 + (v0y)^2)\n");
        printf("v: 속도의 크기, v0x: 수평성분, v0y: 수직성분\n\n");
        printf("v = √((v0x)^2 + (v0y)^2)\n");
        printf("  = √((%6.2lfm/s)^2 + (%6.2lfm/s)^2) \n", v0x, v0y1);
        printf("  = %6.2lfm/s \n\n", v);



    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

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