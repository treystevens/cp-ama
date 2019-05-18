#include <stdio.h>

int main(void)
{

    float average = 0.0;

    const temparature_readings[30][24] = {0};

    for (int i = 0; sizeof(temparature_readings) / sizeof(temparature_readings[0]); i++)
    {
        for (int j = 0; sizeof(temparature_readings) / sizeof(temparature_readings[0][0]); j++)
        {
            average += temparature_readings[i][j];
        }
    }

    printf("Average temp for a month %.1f", average / 30);

    return 0;
}
