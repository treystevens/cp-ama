// Write a program that computes the volume of a sphere with a 10-meter radius using the formula v = 4/3(pi)r^3. Write the fraction as 4.0f/3.0f.
// -- Modify the program so that it prompts the user to enter the radius of the sphere

#include <stdio.h>
#define PI 3.14

int main(void)
{

    float volume, radius;
    printf("Please enter a radius: ");
    scanf("%f", &radius);

    volume = 4.0f / 3.0f * PI * (radius * radius * radius);

    printf("The volume of a sphere is: %f\n", volume);
    return 0;
}