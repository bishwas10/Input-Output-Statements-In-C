/*Write a C program to compute the perimeter and area of a circle 
with a given radius. Go to the editor
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches */
#include <stdio.h>
#define PI 3.14
int main ()
{
    float radius, perimeter, area;
    printf ("Enter the radius of the circle \n");
    scanf ("%f",&radius);
    perimeter = 2* PI* radius;
    area = PI * radius*radius;
    printf ("Perimter of the Circle  = %f\n", perimeter);
    printf ("Area of the Circle = %f\n", area);
    

    return 0;
}