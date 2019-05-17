#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char ch;
    int sum = 0;
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {

        switch (toupper(ch))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            sum++;
            break;
        default:
            break;
        }
    }

    printf("Your setence contains %d vowels\n", sum);

    return 0;
}