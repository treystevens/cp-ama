#include <stdio.h>

int main(void)
{

    long double num, n = 1;

    printf("Enter a positive integer: ");
    scanf("%Lf", &num);

    while (num > 0)
    {
        n *= num;
        num--;
    }

    printf("Factorial of num: %Lf\n", n);

    return 0;
}

/**
 * 
 * a) short       - 7
 * b) int         - 16
 * c) long        - 20
 * d) long long   - 25
 * e) float       - 25
 * f) double      - 34
 * g) long double - 1754
 * 
 */