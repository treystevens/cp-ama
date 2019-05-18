#include <stdio.h>

int main(void)
{

    int grid[5][5] = {0};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < 5; j++)
            scanf("%d", &grid[i][j]);
    }

    printf("Row totals: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            sum += grid[i][j];
        printf("%d ", sum);
        sum = 0;
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            sum += grid[j][i];
        printf("%d ", sum);
        sum = 0;
    }

    printf("\n");
    return 0;
}