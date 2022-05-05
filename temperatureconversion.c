/*Write a program that converts Centigrade to Fahrenheit. 
Go to the editor
Expected Output :
Input a temperature (in Centigrade): 45
113.000000 degrees Fahrenheit.*/
#include <stdio.h>
int main ()
{
    int C;
    float F;
    printf ("Enter a temperature (in Centigrade)\n");
    scanf ("%d",&C);
    F = (C*9/5)+32;
    printf ("The temperature if Fahrenheight is %f\n", F);
    return 0;
}