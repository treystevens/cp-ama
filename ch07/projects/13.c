#include <stdio.h>

int main(void)
{

    char ch;
    int counter, words;
    float average;

    printf("Enter a sentence: ");

    counter = 0;
    words = 1;

    while ((ch = getchar()) != '\n')
    {

        if (ch == ' ')
            words++;
        else
            counter++;
    }

    average = (float)counter / words;
    printf("Average word length: %.1f\n", average);

    return 0;
}