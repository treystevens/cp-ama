/* 
   Write a program that calculates the remaining balance on a loan
   after the first, second, and third monthly payments:
      Enter loan of loan: 20000.00
      Enter interest rate: 6.0
      Enter monthly payment: 386.66
      Balance remaining after first payment: $19713.34
      Balance remaining after second payment: $19425.25
      Balance remaining after third payment: $19135.71

   Display each balance with two digits after the decimal point.

   Hint: Each month, the balance is decreased by the loan of the
   payment, but increased by the balance times the monthly interest
   rate. To find thinterest rate, convert the interest rate
   entered by the user to a percentage and divide it by 12.
*/

#include <stdio.h>

int main(void)
{

    float loan, interestRate, payment, monthlyRate;

    printf("Enter loan of loan: ");
    scanf("%f", &loan);
    printf("Enter monthlyRate rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthlyRate = (interestRate / 100.00f) / 12.00f;

    loan = (loan + (loan * monthlyRate)) - payment;
    printf("Balance remaining after first payment: %2.f\n", loan);
    loan = (loan + (loan * monthlyRate)) - payment;
    printf("Balance remaining after second payment: %2.f\n", loan);
    loan = (loan + (loan * monthlyRate)) - payment;
    printf("Balance remaining after third payment: %2.f\n", loan);

    return 0;
}