/*
page 149 exercise 3 array:
program 6.2 only allows 20 responses to be entered, modify the program so that any number of responses can be entered. 
So that the users does not have to count the number of responses in the list, set up the program so that the value 999 can
be keyed in by the user to indicate that the last response has been entered.(hint: you can use break statement
if you want to exit your loop.)
*/
#include <stdio.h>
int main() {
    int ratingCounters[11] = {0}; // Initialize array to store response counts
    int response;

    printf("Enter your responses (enter 999 to end):\n");

    while (1) {
        scanf("%d", &response);
        
        if (response == 999) {
            printf("End of responses\n");
            break; // Exit the loop if 999 is entered
        } 
        else if (response < 1 || response > 10) {
            printf("Invalid response: %d\n", response);
        } 
        else {
            ratingCounters[response]++; // Increment count for the entered response
        }
    }

    printf("\n\nRating   Number of Responses\n");
    printf("------   -------------------\n");

    for (int i = 1; i <= 10; ++i) {
        printf("%4i%14i\n", i, ratingCounters[i]);
    }

    return 0;
}


//This is a perfect way to make sure user can enter any number of responses without having to count the number of responses


