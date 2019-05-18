#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    bool digit_seen[10] = {false}, repeated = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            repeated = true;
            printf("%d", digit);
        }

        digit_seen[digit] = true;
        n /= 10;
    }
    printf("\n");

    if (!repeated)
        printf("No repeated digit.\n");

    return 0;
}