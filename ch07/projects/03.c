#include <stdio.h>

int main(void)
{
    double n, sum = 0.0;

    printf("This programs sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%1f", &n);
    while (n != 0.0)
    {
        sum += n;
        scanf("%1f", &n);
    }

    printf("The sum is: %f\n", sum);

    return 0;
}