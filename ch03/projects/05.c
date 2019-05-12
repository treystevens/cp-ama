/* c3p5.c
   Ray Santos
   August 20, 2013
   C Programming: A Modern Approach, Second Edition
   Chapter 3, Programming Project 5
   Write a program that asks the user to enter the numbers from
   1 to 16 (in any order) and then displays the numbers in a
   4 by 4 arrangement, followed by the sums of the rows, columns,
   and diagonals:
       Enter the numbers from 1 to 16 in any order:
       16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
       16  3  2 13
        5 10 11  8
        9  6  7 12
        4 15 14  1
       Row sums: 34 34 34 34
       Column sums: 34 34 34 34
       Diagonal sums: 34 34
   If the row, column, and diagonal sums are all the same (as they 
   are in this example), the numbers are said to form a magic square.
   The magic square shown here appears in a 1514 engraving by  artist
   and mathematician Albrecht Durer. (Note that the middle numbers in
   the last row give the date of the engraving.)
*/

int main(void)
{
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;
    int row1, row2, row3, row4;
    int column1, column2, column3, column4;
    int diag1, diag2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10,
          &x11, &x12, &x13, &x14, &x15, &x16);

    row1 = x1 + x2 + x3 + x4;
    row2 = x5 + x6 + x7 + x8;
    row3 = x9 + x10 + x11 + x12;
    row4 = x13 + x14 + x15 + x16;

    column1 = x1 + x5 + x9 + x13;
    column2 = x2 + x6 + x10 + x14;
    column3 = x3 + x7 + x11 + x15;
    column4 = x4 + x8 + x12 + x16;

    diag1 = x1 + x6 + x11 + x16;
    diag2 = x13 + x10 + x7 + x4;

    printf("%2d %2d %2d %2d\n", x1, x2, x3, x4);
    printf("%2d %2d %2d %2d\n", x5, x6, x7, x8);
    printf("%2d %2d %2d %2d\n", x9, x10, x11, x12);
    printf("%2d %2d %2d %2d\n", x13, x14, x15, x16);

    printf("Row sums: %2d %2d %2d %2d\n", row1, row2, row3, row4);
    printf("Column sums: %2d %2d %2d %2d\n", column1, column2, column3, column4);
    printf("Diagonal sums: %2d %2d\n\n", diag1, diag2);

    return 0;
}