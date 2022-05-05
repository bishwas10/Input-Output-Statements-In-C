/*Write a C program that converts kilometers per hour to miles per hour. 
Go to the editor
Expected Output :
Input kilometers per hour: 15
9.320568 miles per hour */
#include <stdio.h>
int main ()
{
    int km;
    float miles;
    printf ("Enter kilometers per hour \n");
    scanf ("%d",&km);
    miles = km* 0.621371;
    printf ("Miles per hour %f\n",miles);
    return 0;
}