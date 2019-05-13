#include <stdio.h>

int main(void)
{

    int input, i1, i2, i3;
    printf("Enter a three-digit number: ");
    scanf("%d", &input);

    i1 = input % 10;
    i2 = input / 10 % 10;
    i3 = input / 100;

    printf("The reversal is: %d%d%d\n", i1, i2, i3);

    return 0;
}