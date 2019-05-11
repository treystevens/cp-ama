// Write a program that asks the user to enter a value for x and then displays the value of the following polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>

int main(void)
{
    int x, x2, x3, x4, x5, value;
    printf("Enter a number for x: ");
    scanf("%d", &x);

    x5 = x * x * x * x * x;
    x4 = x * x * x * x;
    x3 = x * x * x;
    x2 = x * x;
    value = (3 * x5) + (2 * x4) - (5 * x3) - x2 + (7 * x) - 6;

    printf("%d", value);

    return 0;
}