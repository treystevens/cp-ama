#include <stdio.h>

int main(void)
{

    int input, i1;
    printf("Enter a number: ");
    scanf("%d", &input);
    printf("The reversal is: ");

    do
    {
        i1 = input % 10;
        input /= 10;
        printf("%d", i1);
    } while (input != 0);

    printf("\n");

    return 0;
}