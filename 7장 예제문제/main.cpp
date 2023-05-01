#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>   // rand()함수를 사용하기 위한 헤더파일
#include <time.h>



#define MAX_CAPACITY 500
#define MIN_LEVEL 20


void main()
{
    /*1번
    int n;
    printf("카운터의 초기값을 입력하시오 : ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");*/


    /*2번
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다\n", sum);*/


    /*3번
    int num1, num2, num3, sum;
    printf("정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = 0;
    if (num1 >= 0) 
    {
        sum += num1;
    }
    if (num2 >= 0) 
    {
        sum += num2;
    }
    if (num3 >= 0) 
    {
        sum += num3;
    }

    printf("합은 %d입니다.\n", sum);*/


    /*4번
   int num, i;
    printf("?¤¼?¸? ??·???½?¿?: ");
    scanf("%d", &num);

    printf("¾?¼?: ", num);
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");*/


    /*5번
    double r, result = 1.0;
    int n, i;

    printf("실수값을 입력하시오: ");
    scanf("%lf", &r);

    printf("거듭 제곱 횟수를 입력하시오: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        result *= r;
    }

    printf("결과값은 : 2%lf\n",result);*/


    /*6번
    int n = 0;
    int result = 0;
    printf("n의 값을 입력하시오: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        result += i * i;
    }
    printf("계산값은 %d입니다\n", result);*/


    /*7번
    int i, j;
    for (i = 1; i <= 7; i++) 
    {
        for (j = 1; j <= 7 - i; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {

            printf("*");
        }
        printf("\n");
    }*/


    /*8번
    int n;
    printf("?¤¼?¸? ??·???¼¼¿?: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }*/


    /*9번
    int n1, n2, i, gcd, lcm;
    printf("두개의 정수를 입력하세요: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) 
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("%d 와 %d의 최소 공배수: %d\n", n1, n2, lcm);*/


    /*10번
    int j, i;
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }*/


    /*11번
    int fuel = 100;
    char action;
    int amount;

    printf("현재연료량: %d\n", fuel);

    while (1) {
        printf("연료충전은 +, 소모는 -로 입력해주세요: ");
        scanf(" %c%d", &action, &amount);

        if (action == '+') 
        {
            if (fuel + amount > MAX_CAPACITY) 
            {
                printf("최대 용량을 초과했습니다.\n");
            }
            else 
            {
                fuel += amount;
                printf("현재 연료량: %d\n", fuel);
            }
        }
        else if (action == '-') 
        {
            if (fuel - amount < 0) 
            {
                printf("연료가 부족합니다.\n");
            }
            else 
            {
                fuel -= amount;
                printf("현재 연료량: %d\n", fuel);

                if (fuel < MIN_LEVEL) 
                {
                    printf("(경고) 연료가 %d리터 미만입니다.\n", MIN_LEVEL);
                }
            }
        }
    }
}*/


    /*12번
    int x;
    do
    {
        printf("막대의 높이(종료: -1): ");
        scanf("%d", &x);
        for (int i = 1; i <= x; i++)
        {
            printf("*");
        }
        printf("\n");
    } while (x != -1);*/


    /*13번
    int sum = 0;
    int i = 0;
    while (1)
    {
        sum += i;
        if (sum > 10000)
            break;
        i++;
    }*/


    /*14번
    int n = 0, r = 0, i = 0, a = 1, b = 1, result = 1;
    printf("n의 값: ");
    scanf("%d", &n);
    printf("r의 값: ");
    scanf("%d", &r);
    for (i = 1; i <= (n - r - 1); i++)
    {
       result *= i;
    }
    printf("순열의 값은 %d입니다.\n", result);*/


    /*15번
    int n, d;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    do
    {
        d = n % 10;
        n /= 10;
        printf("%d", d);
    } while (n != 0);*/


    /*16번
     char op;
    int a, b;
    printf("**********");
    printf("\nA----Add");
    printf("\nS----Subtract");
    printf("\nM----Multiply");
    printf("\nD----Divide");
    printf("\nQ----Qutit");
    printf("\n**********");
    do
    {
        printf("\n연산을 선택하시오: ");
        scanf("%c", &op);
        if (op == 'Q')
            break;
        printf("두 수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d", &a, &b);
        if (op == 'A')
        {
            printf("\n%d\n", a + b);
            break;
        }
        else if (op == 'S')
        {
            printf("\n%d\n", a - b);
            break;
        }
        else if (op == 'M')
        {
            printf("\n%d\n", a * b);
            break;
        }
        else if (op == 'D')
        {
            printf("\n%d\n", a / b);
            break;
        }
    } while (1);*/


    /*17번
    int n;
    double sum = 0.0;
    printf("항의 개수: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("수열의 합: %lf\n", sum);*/


    /*18번
     int i, n, count = 0;
    double x, y, pi;
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1) count++;
        printf("반복 횟수: %d\n", (double)count / i * 4, i + 1);
    }
    pi = (double)count / n * 4;
    printf("파이: \n", n, pi);*/


    /*19번
     int sticks = 12;
    int num;
    srand(time(NULL));
    while (sticks > 0)
    {
        printf("현재 스틱 개수: %d\n", sticks);
        printf("사용자는 몇 개의 스틱을 가져갈까요? (0~3개): ");
        scanf("%d", &num);
        while (num < 0 || num > 3 || num > sticks)
        {
            printf("잘못된 입력입니다. 0~%d개의 스틱 중에서 선택하세요: ", sticks);
            scanf("%d", &num);
        }
        sticks -= num;
        if (sticks == 0)
        {
            printf("컴퓨터 승리\n");
            break;
        }
        printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n", rand() % (sticks > 3 ? 4 : sticks));
        sticks -= num;
        if (sticks == 0)
        {
            printf("승리\n");
            break;
        }
    }*/


    /*20번
     int secret_num, guess, low = 1, high = 100, count = 0;
    printf("1부터 100사이의 숫자 중 하나를 선택해주세요: ");
    scanf("%d", &secret_num);
    while (1)
    {
        srand(time(NULL));
        guess = low + rand() % (high - low + 1);
        printf("컴퓨터가 추측한 숫자는 %d 입니다.\n", guess);
        count++;
        if (guess == secret_num)
        {
            printf("컴퓨터가 %d번째 시도에 숫자 %d를 맞췄습니다.\n", count, secret_num);
            break;
        }
        else if (guess < secret_num)
        {
            printf("숫자가 작습니다.\n");
            low = guess + 1;
        }
        else
        {
            printf("숫자가 큽니다.\n");
            high = guess - 1;
        }
    }*/
}