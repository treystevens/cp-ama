/**
 * 
 * Write a program that forms product informations entered by the user. A session with the proggram should look like this:
 * 
 * Enter item number: 583
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 * 
 * Item         Unit            Purchase
 *              Price           Date
 * 583          $   13.50       10/24/2010
 * 
 * 
 * The item number and date should be left justified; the unit price should be right justified. Allow dollar ammounts up to $9999.99. Hint: use tabs to line up the columns.
 */

#include <stdio.h>

int main(void)
{

    int item_number, month, date, year;
    float unit_price;

    printf("Enter item number:");
    scanf("%d", &item_number);
    printf("Enter unit price:");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%d/%d/%d\n", item_number, unit_price, month, date, year);

    return 0;
}