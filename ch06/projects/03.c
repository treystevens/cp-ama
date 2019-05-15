#include <stdio.h>

int main(void)
{

    int m, n, rem, numer, denom;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    numer = m;
    denom = n;

    while (n != 0)
    {
        rem = m % n;
        m = n;
        n = rem;
    }

    numer /= m;
    denom /= m;

    printf("Greatest common divisor: %d/%d\n", numer, denom);

    return 0;
}