#include <stdio.h>

/**
 *  Where n causes failures:
 * 
 *  short - 182         - 16bit
 *  int   - 46341       - 32bit
 *  long  - 3037000500  - 64bit
 * 
 */

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        printf("%20d%20d\n", i, i * i);
        if (i * i < 0)
        {
            break;
        }
    }

    return 0;
}
