/*
5! = 5 * 4 * 3 * 2 * 1 = 120
write a program to generate and print a table of the first 10 factorials.
*/

#include <stdio.h>

int main()
{
    int n, factorial=1;

    printf("Table of Factorials\n");
    printf("n\t factorial\n");
    printf("--\t --\n");

    for(n=1; n<=10; n++)
    {
        factorial*= n;
        printf("%i\t %i\n", n, factorial);
    }
    return 0;
}
//page 90 programming in C