/*
create a program to generate a table of prime numbers not greater than 50
*/
/* Solution 1: done by copilot to generate prime numbers
#include <stdio.h>

int main()
{
    int i, j, isPrime;
    for (i = 2; i <= 50; i++)
    {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
*/

#include <stdio.h>

int main()
{
    int p, d;
    _Bool isPrime;

    for (p=2; p<=50; p++)
    {
        isPrime = 1;
        for (d =2; d < p; d++)
        {
            if (p % d == 0)
            {
                isPrime = 0;
                break; //No need to continue checking if it is not prime
            }
        }

        if (isPrime != 0)
        {
            printf("%i  ", p); //print only if it is prime
        }
        
    }
    printf("\n");
    return 0;
}
// in _Bool values, 0 represents false, 1 represents true
/*
differences between a flag and _Bool in C programming is that:
In C programming, a flag and _Bool are both used to represent boolean values, but they have some differences 
in terms of their usage and underlying implementation.
Usage:
Flag: A flag is typically a variable that is used to indicate the status or state of a condition. It is often declared as an integer or 
a character type, where a specific value (usually 0 or 1) represents the false or true state of the condition.
_Bool: _Bool is a built-in data type in C that represents boolean values. It can only have two possible values: 
0 (false) or 1 (true). _Bool is typically used when you need a simple true/false value without the need for additional states or condition
*/

/*
if (isPrime != 0) can also be described as if (! isPrime)
! has the same precedence as the unary minus operator, which means it has higher precedence than all binary arithmetic operators
and all relational operators
!(x < y)
*/
// In order to use _Bool values, we have to include header file #include <stdbool.h>