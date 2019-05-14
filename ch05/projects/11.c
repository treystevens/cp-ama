#include <stdio.h>

int main(void)
{

    int num;

    printf("Enter a two digit number: ");
    scanf("%d", &num);

    if (num < 0 || num > 99)
    {
        printf("Invalid input. Enter a two digit number.");
        return 0;
    }

    printf("You entered the number ");

    if (num > 10 & num < 20)
        switch (num)
        {
        case 11:
            printf("eleven\n");
            return 0;
            break;
        case 12:
            printf("twelve\n");
            return 0;
            break;

        case 13:
            printf("thirteen\n");
            return 0;
            break;

        case 14:
            printf("fourteen\n");
            return 0;
            break;

        case 15:
            printf("fifthteen\n");
            return 0;
            break;

        case 16:
            printf("sixteen\n");
            return 0;
            break;

        case 17:
            printf("seventeen\n");
            return 0;
            break;
        case 18:
            printf("eightteen\n");
            return 0;
            break;

        case 19:
            printf("nineteen\n");
            return 0;
            break;

        default:
            break;
        };

    if (num > 10)
    {
        switch (num / 10)
        {
        case 9:
            printf("ninety");
            break;
        case 8:
            printf("eighty");
            break;
        case 7:
            printf("seventy");
            break;
        case 6:
            printf("sixty");
            break;
        case 5:
            printf("fifty");
            break;
        case 4:
            printf("forty");
            break;
        case 3:
            printf("thirty");
            break;
        case 2:
            printf("twenty");
            break;
        case 1:
            printf("ten");
            break;
        default:
            break;
        }
    }

    switch (num % 10)
    {
    case 1:
        printf("-one\n");
        break;
    case 2:
        printf("-two\n");
        break;
    case 3:
        printf("-three\n");
        break;
    case 4:
        printf("-four\n");
        break;
    case 5:
        printf("-five\n");
        break;
    case 6:
        printf("-six\n");
        break;
    case 7:
        printf("-seven\n");
        break;
    case 8:
        printf("-eight\n");
        break;
    case 9:
        printf("-nine\n");
        break;

    default:
        break;
    }

    return 0;
}