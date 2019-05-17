#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char ch, first_initial, comma;
    int sum = 0;
    printf("Enter a first and last name: ");

    while ((ch = getchar()) == ' ')
        ;
    first_initial = ch;
    while ((ch = getchar()) != ' ')
        ;
    while ((ch = getchar()) != '\n')
        putchar(ch);

    printf(", %c.\n", first_initial);

    return 0;
}