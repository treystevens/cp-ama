#include <stdio.h>

int main(void)
{

    char ch;
    int i;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch >= 65 && ch <= 67)
            ch = 50;
        else if (ch >= 68 && ch <= 71)
            ch = 51;
        else if (ch >= 72 && ch <= 74)
            ch = 52;
        else if (ch >= 75 && ch <= 77)
            ch = 53;
        else if (ch >= 78 && ch <= 80)
            ch = 54;
        else if (ch >= 81 && ch <= 83)
            ch = 55;
        else if (ch >= 84 && ch <= 86)
            ch = 56;
        else if (ch >= 87 && ch <= 89)
            ch = 57;
        printf("%c", ch);
    }
    printf("\n");

    return 0;
}