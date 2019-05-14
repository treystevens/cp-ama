#include <stdio.h>

int main(void)
{

    int input, digits;
    printf("Enter a number: ");
    scanf("%d", &input);

    if (input > 0 && input < 10)
        digits = 1;
    else if (input >= 10 && input < 100)
        digits = 2;
    else if (input >= 100 && input < 1000)
        digits = 3;
    else if (input >= 1000 && input < 10000)
        digits = 4;
    printf("The number %d has %d digits\n", input, digits);

    return 0;
}