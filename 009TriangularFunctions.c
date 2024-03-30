 //Triangular number is the sum of all natural numbers up to n.
/*
program7.4 function to calculate the nth triangular number
*/

#include <stdio.h>

void calculateTriangularNumber(int n) {    //function prototype declaration
    int i, triangularNumber = 0;  //strictly speaking, we should define the local variables with auto in front of them
    for (i = 1; i<=n; i++) {
        triangularNumber += i;   
    }
    printf("Triangular number %d is %d\n", n, triangularNumber);
}

int main(void) {
    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(50);

    return 0;
}