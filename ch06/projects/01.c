#include <stdio.h>

int main(void)
{

    float input, largest = 0;

    printf("Enter a number [press 0 to exit]: ");
    scanf("%f", &input);

    while (input != 0)
    {
        if (input > largest)
            largest = input;

        printf("Enter a number: ");
        scanf("%f", &input);
    }

    printf("The largest number entered was %.2f\n", largest);

    return 0;
}