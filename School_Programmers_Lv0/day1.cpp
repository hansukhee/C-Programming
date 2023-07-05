#include <stdio.h>
#define LEN_INPUT 1000001
#define LEN_INPUT 11
#define LEN_INPUT 10


/*int main(void)
{

    //문자열을 출력하는 프로그램


    // 문제설명
    //문자열 str이 주어질 때,
    // str을 출력하는 코드를 작성해 보세요.


    //제한사항
    // 1 ≤ str의 길이 ≤ 1,000,000
    // str에는 공백이 없으며, 첫째 줄에 한 줄로만 주어집니다.

    char s1[LEN_INPUT];
    scanf("%s", s1);

    printf("%s\n", s1);

    return 0;
}*/



/*int main(void) 
{

    //a와b를 출력하는 프로그램

    // 문제설명
    // 정수 a 와 b 가 주어집니다.
    // 각 수를 입력받아 예와 같은 형식으로 출력하는 코드를 작성하여 보세요.

    // 제한사항
    // -100,000 ≤ a, b ≤ 100,000
    
    
    int a;
    int b;

    scanf("%d %d", &a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}*/


/*int main(void)  
{

    // 문자열 반복해서 출력하는 프로그램

    // 문제설명
    // 문자열 str과 정수 n이 주어집니다.
    // str이 n번 반복된 문자열을 만들어 출력하는 코드를 작성해 보세요.

    // 제한사항
    // 1 ≤ str의 길이 ≤ 10 
    // 1 ≤ n ≤ 5


    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);

    for (int i = 0; i < a; ++i)
    {
        printf("%s", s1);
    }

    return 0;
}*/

/*int main(void)  
{

    // 대소문자 바꿔 출력하는 프로그램

    //문제설명
    // 영어 알파벳으로 이루어진 문자열 str이 주어집니다.
    // 각 알파벳을 대문자는 소문자로 소문자는 대문자로 변환해서 출력하느느 코드를 작성해 보세요.

    // 제한사항
    // 1 ≤ str의 길이 ≤ 20
    // str은 알파벳으로 이루어진 문자열입니다.

    char s1[LEN_INPUT];
    scanf("%s", s1);

    for (int i = 0; s1[i] != '\0'; ++i)
    {
        if ((s1[i]))
        {
            printf("%c", (s1[i]));
        }
        else if ((s1[i]))
        {
            printf("%c", (s1[i]));
        }
        else
        {
            printf("%c", s1[i]);
        }
    }
    printf("\n");

    return 0;
}*/

/*int main(void) 
{   

     // 특수문자 출력하는 프로그램

     // 문제 설명
     // 다음과 같이 출력하도록 코드를 작성해 주세요.

     // 출력 예시
     // !@#$%^&*(\'"<>?:;

    char special_symbol[] = "!@#$%^&*(\\'\"<>?:;";
    printf("%s\n", special_symbol);

}*/