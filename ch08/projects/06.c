#include <stdio.h>
#include <ctype.h>

#define SIZE 50
int main(void)
{

    char message[SIZE] = {0}, ch;
    int counter = 0;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n' && counter < SIZE)
    {
        message[counter++] = toupper(ch);
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < SIZE; i++)
    {
        switch (message[i])
        {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('3');
            break;
        case 'I':
            putchar('1');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            message[i] = '5';
            putchar('5');
            break;
        default:
            putchar(message[i]);
            break;
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}