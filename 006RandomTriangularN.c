//Using for loops to get random triangular number

#include <stdio.h>

int main()
{
    int n, number, triangularNumber;
    printf("Enter the triangular number you want:  ");
    scanf("%i", &number);

    triangularNumber = 0;
    for ( n=1; n <= number; n++)
    {
        triangularNumber += n;
        
    }
    printf("Triangular number %i is %i\n\n", number, triangularNumber);
    return 0;
}