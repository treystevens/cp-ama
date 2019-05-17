#include <stdio.h>
#include <math.h>

int main(void)
{

    double x, y = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

     while (fabs(y - (y + x / y) / 2) > .00001 * y)
        y = (y + x / y) / 2;

    printf("Square root: %lf\n", y);
    return 0;
}
