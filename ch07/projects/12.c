#include <stdio.h>

int main(void)
{

    char ch, prev_char, operand;
    float value, num;

    printf("Enter an expression: ");

    scanf("%f", &value);

    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case '+':
            scanf("%f", &num);
            value += num;
            break;
        case '-':
            scanf("%f", &num);
            value -= num;
            break;
        case '/':
            scanf("%f", &num);
            value /= num;
            break;
        case '*':
            scanf("%f", &num);
            value *= num;
            break;
        default:
            break;
        }
    }

    printf("Value of expression: %f\n", value);

    return 0;
}