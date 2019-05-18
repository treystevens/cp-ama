#include <stdio.h>

float income_tax(float income);

int main(void)
{

    float income;
    printf("Enter your taxable income: ");
    scanf("%f", &income);

    printf("Tax due: $%.2f\n", income_tax(income));

    return 0;
}

float income_tax(float income)
{

    if (income <= 750.00f)
        return .01f * income;
    else if (income <= 2250.00f)
        return 7.50f + (.02f * (income - 750.00f));
    else if (income <= 3750.00f)
        return 37.50f + (.03f * (income - 2250.00f));
    else if (income <= 5250.00f)
        return 82.50f + (.04f * (income - 3750.00f));
    else if (income <= 7000)
        return 142.50f + (.05f * (income - 5250.00f));
    else
        return 230.00f + (.06f * (income - 7000.00f));
}