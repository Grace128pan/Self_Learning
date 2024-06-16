/*
here is a simple program to demonstrate how to create an array, populate it with values and print those values
*/

#include <stdio.h>

int main() {
    //define an array of integers with a size of 5
    int array[5];

    //populate the array with values
    for(int i=0; i<5;i++) {
        array[i] = i+1; //populate the array with values 1,2,3,4,5
    }

    //print the values of the array
    printf("The values of the array are: ");
    for (int i=0; i<5; i++) {
        printf("%d", array[i]);
    }
    return 0;
}