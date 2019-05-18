#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    bool digit_seen[10] = {false}, repeated = false;
    int digit, counter = 0;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        while (n > 0)
        {
            digit = n % 10;
            if (digit_seen[digit])
            {
                repeated = true;
                printf("Number has repeated digits.\n");
                break;
            }

            digit_seen[digit] = true;
            n /= 10;
        }

        for (int i = 0; i < sizeof(digit_seen) / sizeof(digit_seen[0]); i++)
        {
            digit_seen[i] = 0;
        }

        if (!repeated)
            printf("Number does not have repeated digits.\n");

        repeated = false;

        printf("Enter a number: ");
        scanf("%ld", &n);
    }

    return 0;
}