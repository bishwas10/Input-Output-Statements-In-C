/* Write a program to display the profile of the students */
#include <stdio.h>
int main ()
{
    char name [20];
    int roll, marks;
    printf ("Enter the name of the students\n");
    scanf ("%s",&name);
    printf ("Enter the Roll Number of the students \n");
    scanf ("%d",&roll);
    printf ("Enter the marks of the students \n");
    scanf ("%d",&marks);
    printf ("\tName    \tRoll_Number   \tMarks\n  ");
    printf ("\t%s      \t%d         \t%d", name,roll, marks);
    return 0;
}