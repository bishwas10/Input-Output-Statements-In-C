/* Write a program in C to compute the lift to drag ratio of a plane whose
Mach no. is entered by the user */
#include <stdio.h>
int main ()
{
    float mach_number, drag_ratio;
    printf ("Enter the MACH Number \n");
    scanf ("%f",&mach_number);
    drag_ratio = 4*((mach_number+3)/mach_number);
    printf ("Lift of Drag Ratio = %f\n", drag_ratio);
    return 0;
}