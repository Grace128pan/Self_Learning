/*
 program 7: find out whether your compiler supports variable length arrays or not. if so, write a program to test the feature out
*/

/*
#include <stdio.h>

int main() {
#ifdef __STDC_NO_VLA__
    printf("Variable-length arrays are not supported by this compiler.\n");
#else
    printf("Variable-length arrays are supported by this compiler.\n");
#endif
    return 0;
}
*/

#include <stdio.h>

int main() {
    int n;

    // Ask the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare a variable-length array of size n
    int arr[n];

    // Ask the user to enter elements for the array
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements of the array
    printf("Elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//variable length arrays are nondefined sized arrays that are defined at runtime