/*
write a program to determine whether a number is even or odd
*/
/* 1. my solution is correct as follows
#include <stdio.h>

int main()
{
    int number, result;
    printf("Enter a number: ");
    scanf("%i", &number);
    result = number % 2;

    if (result == 0) // use equality operator == to compare the result with 0
    {
        printf("The number %i is even.\n", number);
    }
    else
    {
        printf("The number %i is odd.\n", number);
    }

    return 0;
}
*/

#include <stdio.h>

int main()
{
    int number_to_test, remainder;
    printf("Enter your number to be tested.: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
    {
        printf("The number %i is even.\n", number_to_test);
    }
    if (remainder != 0)
    {
        printf("The number %i is odd.\n", number_to_test);
    }

    return 0;
    
}