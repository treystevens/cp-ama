#include <stdio.h>

int main(void)
{

    int input, i1, i2;
    printf("Enter a two-digit number: ");
    scanf("%d", &input);

    i1 = input % 10;
    i2 = input / 10;

    printf("The reversal is: %d%d\n", i1, i2);

    return 0;
}