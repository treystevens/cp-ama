#include <stdio.h>

int main(void)
{

    int i, n, factorial;
    float e;

    printf("Enter a number: ");
    scanf("%d", &n);

    e = 1.0f;

    for (i = 1, factorial = 1; i <= n; i++)
    {
        factorial *= i;
        e += 1.0f / factorial;
    }

    printf("%.2f\n", e);

    return 0;
}
