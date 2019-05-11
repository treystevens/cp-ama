// Write a program that computes the volume of a sphere with a 10-meter radius using the formula v = 4/3(pi)r^3. Write the fraction as 4.0f/3.0f.

#include <stdio.h>
#define SPHERE_RADIUS 10
#define PI 3.14

int main(void)
{

    float volume = 4.0f / 3.0f * PI * (SPHERE_RADIUS * SPHERE_RADIUS * SPHERE_RADIUS);
    printf("%f\n", volume);
    return 0;
}