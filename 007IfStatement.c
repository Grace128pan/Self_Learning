//chapter 5: Making decision
/*
1. if statement
2. the switch statement
3. the conditional operator
*/

/*
If statement (count >count_limit)
{
    printf("Count limit exceeded/n")
}
the printf() will be executed only if the value of count is > count_limit; otherwise, it is ignored
*/

//calculate the absolute value of an integer
/*
write a program that accpets any integer typed in from the terminal and then displays the absolute value of that integer
the simple way to do this is to negate the number if it is less than zero
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter your number: ");
    scanf("%i", &number);

    if (number < 0)
    {
        number = 0 - number;
        printf("The absolute number is %i\n", number);
    }
    else
    {
        number = number;
        printf("The absolute number is %i\n", number);
    }
    return 0;
}