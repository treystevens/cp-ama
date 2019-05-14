#include <stdio.h>

int main(void)
{

    int grade, num1;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Illegal grade\n");
        return 0;
    }

    num1 = grade / 10;

    printf("Letter grade: ");
    switch (num1)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("F\n");
        break;
    }

    return 0;
}