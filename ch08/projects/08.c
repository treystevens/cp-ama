#include <stdio.h>

int main(void)
{

    int grid[5][5] = {0};
    int sum = 0, hi = 0, lo = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter quiz grades %d: ", i + 1);

        for (int j = 0; j < 5; j++)
            scanf("%d", &grid[i][j]);
    }

    printf("Students: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            sum += grid[i][j];
        printf("Student %d - Total: %d, Avg: %d     ", i + 1, sum, sum / 5);
        sum = 0;
    }

    printf("\nQuiz: ");
    for (int i = 0; i < 5; i++)
    {
        lo = grid[0][i];
        for (int j = 0; j < 5; j++)
        {
            if (hi < grid[j][i])
                hi = grid[j][i];
            if (lo > grid[j][i])
                lo = grid[j][i];
            sum += grid[j][i];
        }
        printf("Avg: %d , Low: %d, Hi: %d", sum / 5, lo, hi);
        sum = 0;
    }

    printf("\n");
    return 0;
}

// Answer below:
// #include <stdio.h>

// #define NUM_QUIZZES 5
// #define NUM_STUDENTS 5

// int main(void)
// {
//     int grades[NUM_STUDENTS][NUM_QUIZZES];
//     int high, low, quiz, student, total;

//     for (student = 0; student < NUM_STUDENTS; student++)
//     {
//         printf("Enter grades for student %d: ", student + 1);
//         for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
//             scanf("%d", &grades[student][quiz]);
//     }

//     printf("\nStudent  Total  Average\n");
//     for (student = 0; student < NUM_STUDENTS; student++)
//     {
//         printf("%4d      ", student + 1);
//         total = 0;
//         for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
//             total += grades[student][quiz];
//         printf("%3d     %3d\n", total, total / NUM_QUIZZES);
//     }

//     printf("\nQuiz  Average  High  Low\n");
//     for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
//     {
//         printf("%3d     ", quiz + 1);
//         total = 0;
//         high = 0;
//         low = 100;
//         for (student = 0; student < NUM_STUDENTS; student++)
//         {
//             total += grades[student][quiz];
//             if (grades[student][quiz] > high)
//                 high = grades[student][quiz];
//             if (grades[student][quiz] < low)
//                 low = grades[student][quiz];
//         }
//         printf("%3d    %3d   %3d\n", total / NUM_STUDENTS, high, low);
//     }

//     return 0;
// }