#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>   // rand()�Լ��� ����ϱ� ���� �������
#include <time.h>



#define MAX_CAPACITY 500
#define MIN_LEVEL 20


void main()
{
    /*1��
    int n;
    printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");*/


    /*2��
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�\n", sum);*/


    /*3��
    int num1, num2, num3, sum;
    printf("������ �Է��ϼ���: ");
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

    printf("���� %d�Դϴ�.\n", sum);*/


    /*4��
   int num, i;
    printf("?����?��? ??��???��?��?: ");
    scanf("%d", &num);

    printf("��?��?: ", num);
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");*/


    /*5��
    double r, result = 1.0;
    int n, i;

    printf("�Ǽ����� �Է��Ͻÿ�: ");
    scanf("%lf", &r);

    printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        result *= r;
    }

    printf("������� : 2%lf\n",result);*/


    /*6��
    int n = 0;
    int result = 0;
    printf("n�� ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        result += i * i;
    }
    printf("��갪�� %d�Դϴ�\n", result);*/


    /*7��
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


    /*8��
    int n;
    printf("?����?��? ??��???������?: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }*/


    /*9��
    int n1, n2, i, gcd, lcm;
    printf("�ΰ��� ������ �Է��ϼ���: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) 
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("%d �� %d�� �ּ� �����: %d\n", n1, n2, lcm);*/


    /*10��
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


    /*11��
    int fuel = 100;
    char action;
    int amount;

    printf("���翬�ᷮ: %d\n", fuel);

    while (1) {
        printf("���������� +, �Ҹ�� -�� �Է����ּ���: ");
        scanf(" %c%d", &action, &amount);

        if (action == '+') 
        {
            if (fuel + amount > MAX_CAPACITY) 
            {
                printf("�ִ� �뷮�� �ʰ��߽��ϴ�.\n");
            }
            else 
            {
                fuel += amount;
                printf("���� ���ᷮ: %d\n", fuel);
            }
        }
        else if (action == '-') 
        {
            if (fuel - amount < 0) 
            {
                printf("���ᰡ �����մϴ�.\n");
            }
            else 
            {
                fuel -= amount;
                printf("���� ���ᷮ: %d\n", fuel);

                if (fuel < MIN_LEVEL) 
                {
                    printf("(���) ���ᰡ %d���� �̸��Դϴ�.\n", MIN_LEVEL);
                }
            }
        }
    }
}*/


    /*12��
    int x;
    do
    {
        printf("������ ����(����: -1): ");
        scanf("%d", &x);
        for (int i = 1; i <= x; i++)
        {
            printf("*");
        }
        printf("\n");
    } while (x != -1);*/


    /*13��
    int sum = 0;
    int i = 0;
    while (1)
    {
        sum += i;
        if (sum > 10000)
            break;
        i++;
    }*/


    /*14��
    int n = 0, r = 0, i = 0, a = 1, b = 1, result = 1;
    printf("n�� ��: ");
    scanf("%d", &n);
    printf("r�� ��: ");
    scanf("%d", &r);
    for (i = 1; i <= (n - r - 1); i++)
    {
       result *= i;
    }
    printf("������ ���� %d�Դϴ�.\n", result);*/


    /*15��
    int n, d;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);
    do
    {
        d = n % 10;
        n /= 10;
        printf("%d", d);
    } while (n != 0);*/


    /*16��
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
        printf("\n������ �����Ͻÿ�: ");
        scanf("%c", &op);
        if (op == 'Q')
            break;
        printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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


    /*17��
    int n;
    double sum = 0.0;
    printf("���� ����: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("������ ��: %lf\n", sum);*/


    /*18��
     int i, n, count = 0;
    double x, y, pi;
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1) count++;
        printf("�ݺ� Ƚ��: %d\n", (double)count / i * 4, i + 1);
    }
    pi = (double)count / n * 4;
    printf("����: \n", n, pi);*/


    /*19��
     int sticks = 12;
    int num;
    srand(time(NULL));
    while (sticks > 0)
    {
        printf("���� ��ƽ ����: %d\n", sticks);
        printf("����ڴ� �� ���� ��ƽ�� ���������? (0~3��): ");
        scanf("%d", &num);
        while (num < 0 || num > 3 || num > sticks)
        {
            printf("�߸��� �Է��Դϴ�. 0~%d���� ��ƽ �߿��� �����ϼ���: ", sticks);
            scanf("%d", &num);
        }
        sticks -= num;
        if (sticks == 0)
        {
            printf("��ǻ�� �¸�\n");
            break;
        }
        printf("��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n", rand() % (sticks > 3 ? 4 : sticks));
        sticks -= num;
        if (sticks == 0)
        {
            printf("�¸�\n");
            break;
        }
    }*/


    /*20��
     int secret_num, guess, low = 1, high = 100, count = 0;
    printf("1���� 100������ ���� �� �ϳ��� �������ּ���: ");
    scanf("%d", &secret_num);
    while (1)
    {
        srand(time(NULL));
        guess = low + rand() % (high - low + 1);
        printf("��ǻ�Ͱ� ������ ���ڴ� %d �Դϴ�.\n", guess);
        count++;
        if (guess == secret_num)
        {
            printf("��ǻ�Ͱ� %d��° �õ��� ���� %d�� ������ϴ�.\n", count, secret_num);
            break;
        }
        else if (guess < secret_num)
        {
            printf("���ڰ� �۽��ϴ�.\n");
            low = guess + 1;
        }
        else
        {
            printf("���ڰ� Ů�ϴ�.\n");
            high = guess - 1;
        }
    }*/
}