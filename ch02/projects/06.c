// Modify the program in problem 5 so that the polynomial is evaluated using the following formula:

// ((((3x + 2)x - 5)x - 1)x + 7) x - 6.

// Note that the modified program has fewer multiplcations. This technique for evaluating polynomials is known as Horner's Rule.

#include <stdio.h>

int main(void)
{
    int x, value;
    printf("Enter a number for x: ");
    scanf("%d", &x);

    value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("%d", value);

    return 0;
}