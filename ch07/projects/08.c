#include <stdio.h>
#include <ctype.h>

int main(void)
{

    int hour, mins, input_time, i1, i2, i3, i4, i5, i6, i7, i8;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &mins, &ch);

    if (toupper(ch) == 'P')
    {
        input_time = hour * 60 * 12 + mins;
    }
    else
    {
        input_time = hour * 60 + mins;
    }
    i1 = 8 * 60;
    i2 = 9 * 60 + 43;
    i3 = 11 * 60 + 19;
    i4 = 12 * 60 + 47;
    i5 = 2 * 60 * 12;
    i6 = 3 * 60 * 12 + 45;
    i7 = 7 * 60 * 12;
    i8 = 9 * 60 * 12 + 45;

    if (hour < 0 || mins >= 60)
    {
        printf("Not a valid time input.\n");
        return 1;
    }

    printf("Closet departure time is at ");
    if (input_time <= i1 + (i2 - i1) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m\n");
    else if (input_time <= i2 + (i3 - i2) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m\n");
    else if (input_time <= i3 + (i4 - i3) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m\n");
    else if (input_time <= i4 + (i5 - i4) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m\n");
    else if (input_time <= i5 + (i6 - i5) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m\n");
    else if (input_time <= i6 + (i7 - i6) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m\n");
    else if (input_time <= i7 + (i8 - i7) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m\n");

    return 0;
}