/**
 * Write a program that accepts a date from the user
 * in the form mm/dd/yyyy and 
 * then displays it in the form yyyymmdd
 * 
 */

#include <stdio.h>

int main(void)
{

    int month, date, year;
    printf("Enter a date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &month, &date, &year);

    printf("You entered the date: %d%.2d%.2d\n", year, month, date);

    return 0;
}