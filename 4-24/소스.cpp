#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>



#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180  // 각도를 라디안으로 변환하는 매크로
#define RAD2DEG(x)  x*180/M_PI   //  각도를 디그리로 변환하는 매크로

void Excersize_4_24(int solution, int answer) //한라대학교 미래모빌리티공학과 한석희
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
    printf("세 줄에 매달려 있는 새집이다.\n\n");
    printf("새집의 무게가 %6.2lfN 이라면 각 줄에 작용하는 장력 T^1, T^2, T^3 을 구하라. \n\n", T3);


    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("새집의 무게가 %6.2lfN 이라면 각 줄에 작용하는 장력 T^1, T^2, T^3 을 구하라. \n\n", T3);

        printf("관력공식은 뉴턴의 제 2법칙\n");
        printf("∑Fx: 수평성분의 알짜의 힘, ∑Fy:수직성분의 알짜의 힘, T: 장력, cos(θ): 변위, sin(θ): 변위, a: 가속도, m * g: 질량의 무게 \n\n");

        printf("줄과 T1의 사잇각은 %6.2lf° 입니다.\n\n", angle1);

        printf("물체가 정지해있기 위해서는 (∑Fx, ∑Fy, a) = 0입니다.\n");
        printf("중력가속도는 아래 방향 이므로  -9.8m/s^2 입니다.\n\n");

        printf("w = m * g\n");
        printf("  = m * 9.8m/s^2\n");
        printf("  = %6.2lfN\n\n", T3);


        printf("m = %6.2lfN / 9.8m/s^2\n", T3);
        m = T3 / 9.8;
        printf("  = %6.2lfkg\n\n", m);

        printf("∑F = m * a\n");
        printf("   = m * 0\n");
        printf("   = 0\n\n");

        // ∑Fx = T1 * cos(θ) - T2 * cos(θ) = 0
        printf(" ∑Fx = T1 * sin(θ) - T2 * sin(θ) = m * ax\n");
        printf("     = T1 * sin(θ) - T2 * sin(θ) = m * 0\n");
        printf("     = 0\n\n");

        printf(" T1  = (m * g) * sinθ\n");
        printf("     = %6.2lfN * sin(%6.2lf°)\n", T3, angle1);
        T1 = T3 * sin(DEG2RAD(angle1));
        printf("     = %6.2lfN\n\n", T1);

        // ∑Fy = T1 * sin(θ) - T2 * sin(θ) - T3 = 0
        printf(" ∑Fy = T1 - (m * g) * cos(θ) = m * ay\n");
        printf("     = T1 - (m * g) * cos(θ) = m * 0\n");
        printf("     = 0\n\n");

        printf("T2 = (m * g) * cos(θ)\n");
        printf("   = T1 * cos(θ)\n");
        printf("   = %6.2lfN * cos(%6.2lf°)\n",T1, angle2);
        T2 = 1.73 * T1;
        printf("   = %6.2lfN\n\n", T2);


        printf("T3는 새집을 잡고있는 줄 이기 때문에 %6.2lfN 입니다.\n\n", T3);
        printf("T3 = %6.2lfN\n\n", T3);


        if (answer == SHOW)
        {
            printf("=========================   정 답   =============================\n\n");

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