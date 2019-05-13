#include <stdio.h>

int main(void)
{

    int input, total, i1, i2, i3, i4, i5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);

    i1 = input % 8;
    input = input / 8;
    i2 = input % 8;
    input = input / 8;
    i3 = input % 8;
    input = input / 8;
    i4 = input % 8;
    input = input / 8;
    i5 = input % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", i5, i4, i3, i2, i1);

    return 0;
}