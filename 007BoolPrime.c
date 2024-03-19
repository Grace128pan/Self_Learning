//program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int p, d;
    bool isPrime;

    for (p = 2; p <=1000; p++)
    {
        isPrime = true;
        for (d = 2; d < p; d++)
        {
            if (p % d == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime) // this should be out of the for loop previously to ensure different prime numbers show only once
        {
            printf("%i  ", p); //include space in the function to ensure better layout
        }
           
        
    }

    printf("\n");

    return 0;
}

//include <stdbool.h> will enable use to type bool instead of _Bool, this is for cosmetic purposes