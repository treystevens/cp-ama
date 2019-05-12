/* c3p4.c

   Write a program that prompts the user to enter a telephone
   number in the form (xxx) xxx-xxxx and then displays the
   number in the form xxx.xxx.xxxx:
       Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
       You entered 404.817.6900
*/

#include <stdio.h>

int main(void)
{

    int zip, prefix, line;

    printf("Enter your phone number - format (xxx) xxx-xxxx: ");
    scanf("(%d) %d-%d", &zip, &prefix, &line);
    printf("You entered %d.%d.%d\n", zip, prefix, line);
    return 0;
}