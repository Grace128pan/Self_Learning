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
    printf("Table of N and N^2\n");
    printf("n\t n^2\n"); // Column headings
    printf("--\t --\n");

    for (int n = 1; n <= 10; ++n) {
        printf("%d\t %d\n", n, n * n); // Display n and n^2
    }

    return 0;
}
