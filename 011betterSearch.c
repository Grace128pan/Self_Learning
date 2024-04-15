/* page 268
binary search is better than linear search
In this algorithm, you are looking for an element x in an array M of n elements
binary search algorithm
Assuming the array M is sorted in ascending order
step1: set low to 0 and high to n-1
step2: if low > high, x does not exist in M and the algorithm terminates
step3:set mid to (low + high) /2    // this is integer division, 0 is low, 49 is high, mid is 24
step4: if M[mid] < x, set low to mid + 1 and go to step 2;
step5: if M[mid] > x, set high to mid -1 and go to step 2;
step6: if M[mid] = x, x is found and the algorithm terminates.
*/
//"Lexicographically" refers to the order in which words or strings are arranged based on the 
//alphabetical order of their characters

/*
compareStrings()
1. if the first string is lexicographically less than the second string, return -1
2. if the first string is lexicographically greater than the second string, return 1
3. if the first string is lexicographically equal to the second string, return 0
*/

#include <stdio.h>
#include <string.h>

int compareStrings(const char *s1, const char *s2);  // pointers are used and point to strings

int compareStrings(const char *s1, const char *s2) {
    return strcmp(s1, s2);   // compare strings
    }

int main() {
    int result = compareStrings("zioty", "yucca");  //the output will be one
    printf("%d\n", result);

    return 0;
}