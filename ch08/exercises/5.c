#include <stdio.h>

int main(void)
{

    int fibo[40] = {0, 1};

    for (int i = 2; i < sizeof(fibo) / sizeof(fibo[0]); i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];

        printf("%d, ", fibo[i]);
    }

    return 0;
}