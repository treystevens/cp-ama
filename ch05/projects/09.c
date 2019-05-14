#include <stdio.h>

int main(void)
{

    int d1_month, d1_day, d1_year, d2_month, d2_day, d2_year;

    printf("Entter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d1_month, &d1_day, &d1_year);
    printf("Entter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d2_month, &d2_day, &d2_year);

    if (d1_year > d2_year)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d2_month, d2_day, d2_year, d1_month, d1_month, d1_year);
    else if (d1_year < d2_year)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d1_month, d1_day, d1_year, d2_month, d2_month, d2_year);
    else if (d1_month > d2_month)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d2_month, d2_day, d2_year, d1_month, d1_month, d1_year);
    else if (d1_month < d2_month)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d1_month, d1_day, d1_year, d2_month, d2_month, d2_year);
    else if (d1_day > d2_day)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d2_month, d2_day, d2_year, d1_month, d1_month, d1_year);
    else if (d1_day < d2_day)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d1_month, d1_day, d1_year, d2_month, d2_month, d2_year);
    else
        printf("The same date.\n");

    return 0;
}