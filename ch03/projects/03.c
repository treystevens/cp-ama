/* 
   Books are identified by an International Standard Book Number
   (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits
   arrange in five groups (Older ISBNs use 10 digits). 
  
   Write a program that breaks down the International Standard
   Book Number (ISBN) entered by a user:
       Enter ISBN: 978-0-393-97950-3
       GS1 prefix: 978
       Group identifier: 0
       Publisher code: 393
       Item number: 97950
       Check digit: 3
   Note: The number of digits in each group may vary; you can't
   assume that the groups have the lengths shown in this example.
   Test your program with actual ISBN values (usually found on the
   back cover of a book and on the copyright page).

*/

#include <stdio.h>

int main(void)
{

    int gs1_prefix, identifier, pub_code, item_num, digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &identifier, &pub_code, &item_num, &digit);

    printf("GS1 Prefix: %d\n", gs1_prefix);
    printf("Group Identifier: %d\n", identifier);
    printf("Publisher Code: %d\n", pub_code);
    printf("Item Number: %d\n", item_num);
    printf("Check digit: %d\n", digit);

    return 0;
}