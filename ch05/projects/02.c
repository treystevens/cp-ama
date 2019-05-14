#include <stdio.h>

int main(void)
{

    int hour, mins;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &mins);

    printf("Equivalent 12-hour time: ");
    if (hour == 0)
        printf("12:%.2d AM\n", mins);
    else if (hour < 12)
        printf("%d:%.2d AM\n", hour, mins);
    else if (hour == 12)
        printf("%d:%.2d PM\n", hour, mins);
    else
        printf("%d:%.2d PM\n", hour - 12, mins);

    return 0;
}