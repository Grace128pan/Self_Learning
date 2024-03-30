//write a program that calculates the average of an array of 10 floating-point values.

#include <stdio.h>

int main() {
    float values[10];
    float sum = 0, average;
    int i;

    printf("Enter 10 floating-point values:\n");

    for (i = 0; i < 10; i++) {
        scanf("%f", &values[i]);
        sum += values[i];
    }

    if (i > 0) {
        average = sum / i;
        printf("The average of the values is: %.2f\n", average);
    } else {
        printf("No values were entered.\n");
    }

    return 0;
}