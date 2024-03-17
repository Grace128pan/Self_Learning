//a triangular number can be generated in this way triangularNumber = n(n+1)/2
/*
write a program that generates a table of triangular numbers using the preceding formula. Have the program generate every fifth triangular number
between 5 and 50(that is 5, 10, 15, 20,---50)
*/
#include<stdio.h>

int main()
{
    int n, j, triangularNumber;

    printf("Table of Special Triangular Numbers\n");
    printf("n\t Triangular Number\n");
    printf("--\t --\n");
    
    for (j = 1; j<=10; j++)
    { 
        n = 5 * j;
        triangularNumber = n*(n+1)/2;
        printf("%i\t %i\n", n, triangularNumber);
    }
    
    return 0;
}