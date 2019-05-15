#include <stdio.h>

int main(void)
{

    int days, starting_day;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    for (int i = 1; i < starting_day; i++)
        printf("   ");

    for (int i = 1; i <= days; i++)
    {
        printf("%3d", i);

        if ((i + starting_day - 1) % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}