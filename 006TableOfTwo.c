//Write a program of Table of Powers of Two

#include <stdio.h>

int main()
{
    int n, two_to_the_n;

    printf("Table Of Powers of Two\n\n");
    printf("n\t  2 to the n\n");
    printf("--\t  --\n");

    two_to_the_n = 1;
    for(n = 0; n <= 10; n++)
    {
        printf("%-2i\t %i\n", n, two_to_the_n);
        two_to_the_n *= 2;
    }

    return 0;
}

//two_to_the_n *=2 will get the result of 2^n, as every time the original value will time 2 again until n is larger than 10
//%-2i will cause to field to be displayed left-justified, 0-9 will take two columns with leading spaces
// %.2i  a decimal point there has a special purpose