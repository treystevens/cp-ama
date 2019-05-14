#include <stdio.h>

int main(void)
{

    int i1, i2, i3, i4, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

    if (i1 > i2)
    {
        largest = i1;
        smallest = i2;
    }
    else
    {
        largest = i2;
        smallest = i1;
    }

    if (largest < i3)
        largest = i3;
    else if (smallest > i3)
        smallest = i3;

    if (largest < i4)
        largest = i4;
    else if (smallest > i4)
        smallest = i4;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}