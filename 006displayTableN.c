//write a program to display a table of n and n^2, for integer n ranging from 1 to 10. be certain to print appropriate column headings
/*
#include<stdio.h>

int main()
{
    int number, right_digit;
    printf("Enter your number.\n");
    scanf("%i", &number);

    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while (number != 0);
    printf("\n");

    return 0;
}

*/

#include <stdio.h>

int main() {
    int n = 1; // Initialize n to start from 1

    // Print column headings
    printf("Table of n and its square\n");
    printf("n      square\n");
    printf("---    -----\n");

    // Loop to calculate and print n and n^2
    do {
        int square = n * n; // Calculate the square of n
        printf("%2d     %3d\n", n, square); // Print n and n^2 with appropriate formatting
        n++; // Increment n
    } while (n <= 10); // Continue the loop while n is less than or equal to 10

    return 0;
}
