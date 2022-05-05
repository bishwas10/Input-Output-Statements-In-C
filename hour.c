 /*Write a program in C that takes minutes as input, 
and display the total number of hours and minutes. Go to the editor
Expected Output :
Input minutes: 546
9 Hours, 6 Minutes */
#include <stdio.h>
int main ()
{
    int min, hr, total;
    printf ("Input Minutes \n");
    scanf ("%d",&min);
    hr = min/60;
    total = min%60;
    printf ("Total hours and minutes is %d Hours , %d minutes", hr,total);


    return 0;
}