/*
concat (result, str1, n1, str2, n2) concatenates two character arrays str1 and str2 of lengths n1 and n2, respectively, 
and stores the result in the array result. The function should be able to handle the case where the result array is the same as either of the input arrays. 
*/
//program 9.1 concatennating character arrays 

//function to concatenate two character arrays 

#include <stdio.h>

void concat(char result[], const char str1[], int n1, const char str2[], int n2) {
    int i, j;
    // Copy str1 to result
    for (i = 0; i < n1; i++) {
        result[i] = str1[i];
    }
    // Copy str2 to result
    for (j = 0; j < n2; j++) {
        result[n1 + j] = str2[j];
    }
}

int main(void) {
    const char s1[5] = {'T', 'e', 's', 't', ' '};
    const char s2[7] = {'w', 'o', 'r', 'k', 's', '.', '\0'}; // Added '\0' to terminate the string
    char s3[12]; // Increased the size to accommodate the concatenated string
    int i;

    concat(s3, s1, 5, s2, 6); // Pass the correct lengths of s1 and s2

    for (i = 0; i < 11; i++) {
        printf("%c", s3[i]);
    }
    printf("\n"); // Print a newline after the loop
    return 0;
}
