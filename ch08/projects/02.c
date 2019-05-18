#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int digit, digit_seen[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Digit:\t\t");

    for (int i = 0; i < sizeof(digit_seen) / sizeof(digit_seen[0]); i++)
    {

        printf("%d ", i);
    }

    printf("\n");
    printf("Occurrences:\t");

    for (int i = 0; i < sizeof(digit_seen) / sizeof(digit_seen[0]); i++)
    {

        printf("%d ", digit_seen[i]);
    }

    printf("\n");

    return 0;
}