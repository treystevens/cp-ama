#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char ch;

    printf("\nEnter two fractions separated by an operator: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &ch, &num2, &denom2);

    if (ch == '+')
    {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);
    }
    else if (ch == '-')
    {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The difference is %d/%d\n", result_num, result_denom);
    }
    else if (ch == '*')
    {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("The product is %d/%d\n", result_num, result_denom);
    }
    else if (ch == '/')
    {
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        printf("The product is %d/%d\n", result_num, result_denom);
    }
    else
    {
        printf("Invalid input. \n");
        return 1;
    }

    return 0;
}