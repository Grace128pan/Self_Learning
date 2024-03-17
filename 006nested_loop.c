#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber, counter;

    for (counter = 1; counter <= 5; counter++)   //the progrom will execute 5 times
    {
        printf("What triangular number do you want? "); // get the number from the user
        scanf("%i", &number);

        triangularNumber = 0; // Reset triangularNumber for each iteration of the outer loop

        for (n = 1; n <= number; n++) // calculate the requested triangular number
        {
            triangularNumber += n;
        }
  
        printf("Triangular number %i is %i\n\n", number, triangularNumber); //display the result
    }
    
    return 0;
}

/*
1. for loop variants: multiple expressions for( i= 0, j = 0; i < 10; i++) or for (i = 0, j = 100; i<10; i++, j=j-10)
2. ommiting fields: for (; j!= 100; j++)
3. declaring variables: for (int counter = 1; counter <= 5; counter++)
for (int n = 1, triangularNumber = 0; n <= 200; n++)
{triangularNumber += n}
*/