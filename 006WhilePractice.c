//compare while and for loop
/*
//4.2 calculate the 200th triangular number

#include <stdio.h>

int main()
{
    int n, triangularNumber;
    triangularNumber = 0;
    n = 1;
    while (n <= 200)
    {
        triangularNumber += n;
        n ++;
    }
     printf("The 200th triangular number is %i\n", triangularNumber);

     return 0;
}

*/

/*
//4.3 generate a table of triangular numbers
#include <stdio.h>

int main()
{
    int n, triangularNumber;

    printf("Table of Triangular Numbers\n\n");
    printf("n\t  Sum from 1 to n\n");
    printf("--\t  ---\n");

    triangularNumber = 0;
    n = 1;

    while (n<=10)
    {
        triangularNumber += n;
        n ++;
        printf("%i\t  %i\n",n, triangularNumber);
    }

    return 0;
}
*/

//4.4 ask the user for input
/*
#include <stdio.h>

int main()
{
    int n, number, triangularNumber;
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;
    n = 1;

    while (n <= number)
    {
        triangularNumber += n;
        n ++; 
        
    }
    printf("Triangular number %i is %i\n", number, triangularNumber);
    return 0;
}
*/


//4.5 Using nested for loops

#include <stdio.h>

int main()
{
    int n, number, triangularNumber, counter;
    counter = 1;
    triangularNumber = 0;
    n = 1;
    while (counter <= 5) 
    {
        printf("Enter the triangular number you want: ");
        scanf("%i", &number);
        counter++;
        
        while (n <= number)
        {
            triangularNumber += n;
            n++; 
        }
        printf("Triangular number %i is %i\n\n", number, triangularNumber);

        // Reset the n and triangularNumber to default value for the next loop.
        n = 1;
        triangularNumber = 0;
    }    
    return 0;
}



