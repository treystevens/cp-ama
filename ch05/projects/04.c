#include <stdio.h>

int main(void)
{

    int wind_speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1)
        printf("Calm\n");
    else if (wind_speed <= 3)
        printf("Light Air\n");
    else if (wind_speed <= 27)
        printf("Breeze\n");
    else if (wind_speed <= 47)
        printf("Gale\n");
    else if (wind_speed <= 63)
        printf("Storm\n");
    else
        printf("Hurricane\n");
    return 0;
}