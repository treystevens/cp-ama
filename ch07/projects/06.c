#include <stdio.h>

int main(void)
{

    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    printf("Size of short: %d\n", (int)sizeof(s));
    printf("Size of int: %d\n", (int)sizeof(i));
    printf("Size of long: %d\n", (int)sizeof(l));
    printf("Size of float: %d\n", (int)sizeof(f));
    printf("Size of double: %d\n", (int)sizeof(d));
    printf("Size of long double: %d\n", (int)sizeof(ld));

    return 0;
}