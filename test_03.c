#include <stdio.h>

int main(void)
{
    /*
    // 문제 1
    int num1, num2;
    int plus, minus;

    printf("두 수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);
    plus = num1 + num2;
    minus = num1 - num2;

    printf("%d + %d = %d\n%d - %d = %d", num1, num2, plus, num1, num2, minus);
    */

    /*
    // 문제 2
    int num1, num2, num3;
    int result;
    printf("세 수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1 * num2 + num3;
    printf("%d X %d + %d = %d", num1, num2, num3, result);
    */

    /*
    // 문제 3
    int num1, result;

    printf("한 수를 입력하시오: ");
    scanf("%d", &num1);

    result = num1 * num1;
    printf("%d의 제곱: %d", num1, result);
    */

    /*
    // 문제 4
    int num1, num2;
    int result1, result2;

    printf("두 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);

    result1 = num1 / num2;
    result2 = num1 % num2;
    printf("몫: %d\t나머지: %d", result1, result2);
    */

    // 문제 5
    int num1, num2, num3;
    int result;

    printf("세 수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = (num1 - num2) * (num2 + num3) * (num3 % num1);
    printf("(%d - %d) X (%d + %d) X (%d %% %d) = %d", num1, num2, num2, num3, num3, num1, result);
    return 0;
}