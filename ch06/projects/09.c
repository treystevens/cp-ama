#include <stdio.h>

int main(void)
{

    float loan, interestRate, payment, monthlyRate, num_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter monthlyRate rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%f", &num_payments);

    monthlyRate = (interestRate / 100.00f) / 12.00f;

    for (int i = 0; i < num_payments; i++)
    {
        if (loan <= 0)
        {
            printf("Balance remaining after payment: $0\n");
            break;
        }

        loan = (loan + (loan * monthlyRate)) - payment;
        printf("Balance remaining after payment: $%2.f\n", loan);
    }

    return 0;
}