#include <stdio.h>

int main(void)
{

    int temp_month, temp_day, temp_year, d2_month, d2_day, d2_year, earliest_date, month, day, year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &temp_month, &temp_day, &temp_year);

    month = temp_month;
    day = temp_day;
    year = temp_year;

    while (temp_year != 0 && temp_month != 0 && temp_year != 0)
    {

        if (temp_year < year)
        {
            month = temp_month;
            day = temp_day;
            year = temp_year;
        }
        else if (temp_year == year)
        {
            if (temp_month < month)
            {
                month = temp_month;
                day = temp_day;
            }
            else if (temp_month == month)
            {
                if (temp_day < day)
                {
                    day = temp_day;
                }
            }
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &temp_month, &temp_day, &temp_year);
    }

    printf("%d/%d/%.2d is the earliest date\n", month, day, year);

    return 0;
}