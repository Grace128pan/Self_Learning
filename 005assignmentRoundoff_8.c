/*
To round off an integer i to the next largest even multiple of another integer j, the following formula can be used:
Next_multiple = i + j - i % j
to round off 256 days to the next largest number of days evenly divisible by a week, values of i = 256 and j = 7 can be substituted into
the preceding formula as follows:
Next_multiple = 256 + 7 - 256 % 7 = 256 + 7 - 4 = 259
*/

//write a program to find the next largest even multiple for the following values of i and j:
/*
i           j
365        7
12258      23
996        4
*/

#include<stdio.h>

int main(void)
{
    // Define arrays to store values of i and j
    int i_values[] = {365, 12258, 996};
    int j_values[] = {7, 23, 4};

    // Calculate and print the next largest even multiple for each pair of i and j
    for (int k = 0; k < 3; k++) {
        int Next_multiple = i_values[k] + j_values[k] - i_values[k] % j_values[k];
        printf("For i=%d and j=%d, the next largest even multiple is %d\n", i_values[k], j_values[k], Next_multiple);
    }

    return 0;
}
