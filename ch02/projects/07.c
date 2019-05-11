// Write a program that asks the user to enter a U.S dollar amount and then shows how to pay that amount using the smallest numer of $20, $10, %5, and $1 bills:
#include <stdio.h>

int main(void)
{
    int amount, bills;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bills = amount / 20;
    amount = amount - (20 * bills);
    printf("$20 bills: %d\n", bills);

    bills = amount / 10;
    amount = amount - (10 * bills);
    printf("$10 bills: %d\n", bills);

    bills = amount / 5;
    amount = amount - (5 * bills);
    printf("$5 bills: %d\n", bills);

    bills = amount / 1;
    amount = amount - (1 * bills);
    printf("$1 bills: %d\n", bills);

    return 0;
}