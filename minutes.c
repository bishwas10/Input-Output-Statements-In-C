/*Write a C program that takes hours and minutes as input, 
and calculates the total number of minutes. Go to the editor
Expected Output :
Input hours: 5
Input minutes: 37
Total: 337 minutes. */
#include <stdio.h>
int main ()
{
    int hr, min,total;
    printf ("Enter hours \n");
    scanf ("%d",&hr);
    printf ("Enter minutes \n");
    scanf ("%d",&min);
    total = hr*60+min;
    printf ("Total Minutes is %d minutes\n", total);
    return 0;
}
