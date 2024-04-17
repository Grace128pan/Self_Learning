/*
page 316
char *days[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};
printf("%s\n", days[2]); //Tuesday
}
1) null character  is equal to 0
2)in larger assignments, i++(post-increment) can be different from pre-increment(++i)
*/

#include <stdio.h>

int main() {
    int i = 5;

    // Post-increment: Returns the value of i, then increments it.
    printf("Post-increment: %d\n", i++); // Output: 5
    printf("Value after post-increment: %d\n", i); // Output: 6

    // Pre-increment: Increments i first, then returns its value.
    printf("Pre-increment: %d\n", ++i); // Output: 7

    // Example in a larger expression:
    int j = 10;
    int result_post = j++ * 2; // j is used first, then incremented
    printf("Result with post-increment: %d\n", result_post); // Output: 20
    printf("Value of j after post-increment: %d\n", j); // Output: 11

    int k = 10;
    int result_pre = ++k * 2; // k is incremented first, then used
    printf("Result with pre-increment: %d\n", result_pre); // Output: 22
    printf("Value of k after pre-increment: %d\n", k); // Output: 11

    return 0;
}
