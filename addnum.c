/* WAP to add two positive integers */
#include <stdio.h>
int main ()
{
   int num1, num2, sum;
   printf ("Enter a First number \n");
   scanf ("%d",&num1);
   printf ("Enter a second nummber \n");
   scanf ("%d",&num2);
   sum = num1+num2;
   printf ("Sum of %d and %d is %d",num1,num2, sum); 
   return 0;
}