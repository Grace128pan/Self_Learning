//programming in C: page67- program looping
/*
1. the for, while, do, break, continue statement
*/

//calculating the eighth triangular number
/*

#include<stdio.h>

int main()
{
    int triangularNumber;
    triangularNumber = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8;
    printf("The eigth triangular number is %d\n", triangularNumber);

    return 0;
}

*/

#include<stdio.h>

int main() 
{
    int n, triangularNumber = 0;

    for(n = 1; n <= 200; n = n + 1)
    {
        triangularNumber = triangularNumber + n;
    }

    printf("The 200th triangular number is %d\n", triangularNumber);

    return 0;
}

/*
1.relational operators
== equal to          count == 10
!= not equal to      flag != DONE
< less than          a < b
<= no greater than   low <= high
>  greater than      pointer >endOfList
>= no less than      j >= 0
2.relational operators haave lower precedence than all arithmetic operators  a < b + c is evaluated as a < (b + c)
3. a == 2 is to test whether the value of a is equal to 2, a = 2 means assigning the value 2 to the variable a;
*/