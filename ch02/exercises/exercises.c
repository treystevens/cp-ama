#include <stdio.h>

// SECTION 2.1
int main(void)
{
   printf("Hello, World\n");
   return 0;
}

// SECTION 2.2
// int main(void)
// {
//     printf("Parkinson's Law:\nWork expands so as to ");
//     printf("fill the time\n");
//     printf("available for its completion.\n");
//     return 0;
// }

/**
 * a. 
 * Directives - #include <stdio.h>
 * Statements - the three printf functions and return                   statement  
 * 
 */

/**
 * b.
 *  Prints out: 
    Parkinson's Law:
    Work expands so as to fill the time
    available for its completion.
  
 * 
 */

// SECTION 2.4
// - a.
// int main(void)
// {
//     int height = 8, length = 12, width = 10, volume
//     int volume = height * length * width;
//
//     printf("Dimensions: %dx%dx%d\n", length, width, height);
//     printf("Volume (cubic inches): %d\n", volume);
//     printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
//
//     return 0;
// }

// - b.
// int main(void)
// {
//     int a, b, c;
//     float z, y, x;
//
//     printf("Integers - a: %d, b: %d, c: %d\n", a, b, c);
//     printf("Floats - z: %f, y: %f, x: %f\n", z, y, x);
//
//     return 0;
// }

// notes:
// - I believe int is being stored at different locations on every compile.
// - floats defalt value are 0.000000.

// SECTION 2.7
// a. - a "100_bottles" is not a legal C identifier.
// b. Having an identifier with adjcent underscores decreases readability.
// c. - a, c, e.

// SECTION 2.8
// a. 14.
// b. answer = (3 * q - p * p) / 3;
// c. The space located inside the printf function are essential.