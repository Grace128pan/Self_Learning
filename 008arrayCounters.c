/*
chapter6. program 6.2 Demonstrating an array of counters
*/
#include <stdio.h>

int main ()
{
    int ratingCounters[11];
    int i, response; //define an array of 11 integers
    
    
    for (i = 1; i <= 10; i++)
    {
        ratingCounters[i] = 0;
    }
    printf("Enter your responses\n"); //ask the user to enter the responses

    for (i = 1; i <=20; i++)
    {
        scanf("%i", &response);
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
        printf("%4i%14i\n", i, ratingCounters[i]); //print the results
    }

    return 0;
}

/*steps
1.Initialize an array of length 11 to keep track of the count of each rating.
2.Prompt the user to input ratings.
3.Loop to read 20 ratings inputted by the user, storing them in the array and incrementing the count for each rating.
4.Output each rating along with its corresponding count to display the distribution of ratings.
*/