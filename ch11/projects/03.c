#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{

    int m, n, rem, numer, denom;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    reduce(m, n, &numer, &denom);

    printf("Greatest common divisor: %d/%d\n", numer, denom);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{

    int m = numerator, n = denominator, rem;

    while (n != 0)
    {
        rem = m % n;
        m = n;
        n = rem;
    }
    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}