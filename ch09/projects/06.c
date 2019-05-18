#include <stdio.h>

int polynomial(int n);
int exponent(int base, int expo);
int boring_way(int x);

int main(void)
{

    int x;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Result: %d\n", boring_way(x));

    printf("Fun Result: %d\n", polynomial(x));

    return 0;
}

int polynomial(int n)
{
    return (3 * exponent(n, 5)) + (2 * exponent(n, 4)) - (5 * exponent(n, 3)) - exponent(n, 2) + (7 * exponent(n, 1)) - 6;
}

int exponent(int base, int expo)
{
    if (expo == 0)
        return 1;
    else
        return base * exponent(base, expo - 1);
}

int boring_way(int x)
{
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
}