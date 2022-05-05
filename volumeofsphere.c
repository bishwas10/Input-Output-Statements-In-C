/*Write a C program that calculates the volume of a sphere. 
Go to the editor
Expected Output :
Input the radius of the sphere : 2.56
The volume of sphere is 70.276237. */
#include <stdio.h>
#define PI 3.14
#include <math.h>
int main ()
{
    float radius, volume;
    printf ("Enter the radius of the sphere \n");
    scanf ("%f",&radius);
    volume = (4 * PI * pow (radius,3))/3;
    printf ("The volume of the sphere is %f\n",volume);
    return 0;
}