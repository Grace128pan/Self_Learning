//go back to program 4.5 and change the program so that it calls the new version of the calculateTriangularNumber() function
//using nested for loop to get triangular number

#include <stdio.h>

int getTriangularNumber(void) {
    int n, number, triangularNumber, counter;
    for (counter = 1; counter <= 5; counter++) {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;

        for (n = 1; n <= number; n++) {
            triangularNumber += n;
        }
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }
    return triangularNumber; // Return the last calculated triangular number
}

int main(void) {
    int result;
    
    result = getTriangularNumber();
    printf("Last calculated triangular number is %i\n", result);

    return 0;
}
