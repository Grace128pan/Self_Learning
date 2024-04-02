//modify the value of triangularNumber is returned by the function'

#include <stdio.h>

int calculateTriangularNumber(int n) {
    int i, triangularNumber = 0;
    for (i = 1; i <= n; i++) {
        triangularNumber += i;
    }
    printf("Triangular number %i is %i\n", n, triangularNumber);
    return triangularNumber;
}

int main(void) {
    int result;
    
    result = calculateTriangularNumber(10);
    printf("Returned value: %d\n", result);

    result = calculateTriangularNumber(20);
    printf("Returned value: %d\n", result);

    result = calculateTriangularNumber(50);
    printf("Returned value: %d\n", result);
    
    return 0;
}
