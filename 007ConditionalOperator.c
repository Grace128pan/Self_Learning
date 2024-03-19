/*
The general format of conditional operator is:
condition ? expression1 : expression2

s = (x < 0) ? -1 : x * x;
if x < 0, then s = -1; otherwise, s = x * x;

similarly
maxValue = (a > b) ? a : b;

More complicated case is:
sign = (number < 0) ? -1 : ((number == 0) ? 0: 1);

likewise:
printf("Sign = % i\n", (number < 0) ? -1; (number == 0) ? 0: 1);
*/
//Chapter5 exercise1
/*
write a program that asks the user to type in two integers at the terminal. Test these two numbers to determine whether the first is evenly divisible by
the second, and then display an appropriate message at the terminal
*/
#include <stdio.h>

int main()
{
    int number1, number2, result;

    printf("Type two numbers here: ");
    scanf("%i %i", &number1, &number2);

    result = number1 % number2;
    
    if (result == 0)
    {
        printf("the number %i is divisible evenly by number %i\n", number1, number2);
    }
    else
    {
        printf("the number %i is not divisible evenly by number %i\n", number1, number2);
    }

    return 0;
}