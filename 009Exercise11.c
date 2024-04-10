/*
page200
Exercise11. Write a function called arraySum() that takes two arguments: an
integer array and the number of elements in the array. Have the function
return as its result the sum of the elements in the array.
*/

#include <stdio.h>

int arraySum(int arr[], int size) 
{
    int sum = 0;
    for (int i=0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    //sizeof(arr) returns the total size of the array in bytes; sizeof(arr[0]) returns the size of the first element in the array in bytes

    printf("Sum of the array is: %d\n", arraySum(arr, size));

    return 0;
}

