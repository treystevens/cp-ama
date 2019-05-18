#include <stdio.h>

int power(int x, int n);

int main(void)
{

    int x, n;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("%d to the power of %d is: %d\n", x, n, power(x, n));

    return 0;
}

int power(int x, int n)
{
    int i;
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
    {
        i = exponent(x, n / 2);
        return i * i;
    }
    else
        return x * exponent(x, n - 1);
}
