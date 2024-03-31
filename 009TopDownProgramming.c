/*
sq_root_result = squareRoot(averages[i]);
minimum(gradeScores); if gradeScores is an array of 100 elements, then the function minimum will return the minimum value in the array
int minimum (int values[100]) {
    ----
    return minValue;
}
*/
/*
1.a function can take an array as an argument, we can write a function minimum to find the minimum value in an array
of 10 integers
*/

//program 7.9 Finding the minimum value in an array
#include <stdio.h>

int minimum(int values[10]) {
    int minValue, i;
    minValue = values[0];

    for (i = 1; i < 10; i++) {
        if (values[i] < minValue) {
            minValue = values[i];
        }
    }
    return minValue;
}

int main(void) {
    int scores[10], i, minScore;
    int minimum(int values[10]);

    printf("Enter 10 scores\n");

    for (i=0; i <10; i++) {
        scanf("%i", &scores[i]);
    }
    minScore = minimum(scores);
    printf("\n Minimum score is %i\n", minScore);

    return 0;
}