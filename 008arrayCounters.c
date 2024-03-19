/*
chapter6. program 6.2 Demonstrating an array of counters
*/
#include <stdio.h>

int main ()
{
    int ratingCounters[11], i, response; //define an array of 11 integers

    for (i = 1; i <= 10; i++)
    {
        ratingCounters[i] = 0;
    }
    printf("Enter your responses\n"); //ask the user to enter the responses

    for (i = 1; i <=20; i++)
    {
        scanf("%i", response);
        if (response < 1 || response > 10)
        {
            printf("Bad response: %i\n", response); //check the response is between 1 and 10
        }
        else
        {
            ratingCounters[response]++; //increment the counter for the response
        }
    }

    printf("\n\nRating\t  Number of Responses\n"); //print the results
    printf("--\t  -------------------\n");

    for (i=1; i<=10; i++)
    {
        printf("%4i %14i\n", i, ratingCounters[i]); //print the results
    }

    return 0;
}