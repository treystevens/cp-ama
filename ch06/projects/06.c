#include <stdio.h>

int main(void)
{

    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    for (int i = 2; i * i <= input; i += 2)
    {
        printf("%d\n", i * i);
    }

    return 0;
}