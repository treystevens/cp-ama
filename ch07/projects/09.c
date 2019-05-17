#include <stdio.h>
#include <ctype.h>

int main(void)
{

    int hour, mins, input_time;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &mins, &ch);

    if (toupper(ch) == 'P')
    {
        hour = hour + 12;
    }
    else
    {
        hour = hour * 60 + mins;
    }

    printf("Equivalent 24-hour time: %d:%2d\n", hour, mins);
  


    return 0;
}