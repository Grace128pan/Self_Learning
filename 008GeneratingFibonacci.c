//chapter6 page134 generating Fibonacci numbers
/*
write a table to generate the first 30 Fibonacci numbers
n = (n-1) + (n-2)
*/
/*
#include <stdio.h>

int main()
{
    int Fibonacci[30], i;

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (i = 2; i < 30; ++i)
    {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
    }

    for (i = 0; i < 30; ++i)
    {
        printf("%d\n", Fibonacci[i]);
    }

    return 0;
}
*/

#include <stdio.h>

int main()
{
    int Fibonacci[30], i;

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (i=2; i<15; i++)
    {
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }

    for (i=0; i<15; i++)
    {
        printf("%d\n", Fibonacci[i]);
    }

    return 0;
}