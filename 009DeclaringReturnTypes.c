//page 168: declaring return types and argument types
/*
The c compiler assumes a function returns a value of type int as the default case
Before the function is called, we should declare the function if we want it to be float instead of int
eg.float absoluteValue(float x);
int printf(char *format,---) tells the compiler that printf takes a character pointer as its first argument
something to keep in mind
1.by default, a function returns an int
2.when define a function that returns an int, defines it as such
3.when define a function that doesn't return a value, use void
4.the compiler converts your arguments to agree with the ones the function expects only if you have previously defined or declared the function
5.declare all functions even if they are defined before they are called(you might decide later to move them somewhere else
in your file or even to another file)
*/

/*
checking function arguments:
in the squareRoot example, if the input is negative, the program will enter into an infinite loop
the square root routine in the standard C library is called sqrt() and it returns a domain error if a negative argument is supplied
*/
//Function to compute the square root of a number. if a number is negative, then just return -1
#include <stdio.h>

/* Function to compute the absolute value of a number */
float absoluteValue(float x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

/* Function to compute the square root of a number.
If a negative argument is passed, then a message
is displayed and -1.0 is returned. */
float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

   /* if (x < 0)
    {
        printf("Negative argument to squareRoot.\n");  
        return -1.0;
    }
    
*/
    while (absoluteValue(guess * guess - x) >= epsilon)
    {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}


   int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num >= 0)
    {
        printf("Square root of %f is %f\n", num, squareRoot(num));
    }
    else
    {
        printf("Cannot compute square root of a negative number.\n");
    }

    return 0;
}

//we can have more than one return in a function

