#include <stdio.h>

int main(void)
{

    int factorial;
    float e, E, term;

    printf("Enter a number: ");
    scanf("%f", &E);

    e = 1.0f;
    for (int i = 1, factorial = 1, term = 1.0f; term > E; i++)
    {

        factorial *= i;
        term = 1.0f / factorial;
        e += term;
    }

    printf("%.2f\n", e);

    return 0;
}
