#include <stdio.h>

int main(void)
{

    int income;
    printf("Enter your taxable income: ");
    scanf("%d", &income);

    printf("Tax due: ");
    if (income < 750)
        printf("%.2f", income * .01);
    else if (income < 2250)
        printf("%.2f", 7.50f + ((income - 750.00f) * .02));
    else if (income < 3750)
        printf("%.2f", 37.50f + ((income - 2250.00f) * .03));
    else if (income < 5250)
        printf("%.2f", 82.50f + ((income - 3750.00f) * .04));
    else if (income < 7000)
        printf("%.2f", 142.50f + ((income - 5250.00f) * .05));
    else
        printf("%.2f", 230.00f + ((income - 7000.00f) * .06));

    return 0;
}