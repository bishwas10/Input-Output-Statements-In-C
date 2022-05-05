/*Write a C program to perform addition, subtraction, 
multiplication and  division of two numbers. Go to the editor
Expected Output :
Input any two numbers separated by comma : 10,5
The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000 */
#include <stdio.h>
int main ()
{
    float num1, num2, sum, difference,product,quotient;
    printf ("Enter and two number separated by comma:\t");
    scanf ("%f %f",&num1, &num2);
    sum = num1+num2;
    difference = num1-num2;
    product = num1*num2;
    quotient = num1/num2;
    printf ("The sum of the given numbers is %f\n",sum);
    printf ("The difference of the given numbers is %f\n",difference);
    printf ("The product of the given numbers is %f\n",product);
    printf ("The quotientr of the given numbers is %f\n",quotient);
    return 0;
}