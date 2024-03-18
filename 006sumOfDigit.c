// write a program that calculates the sum of the digits of an integer
//the sum of the digits of 2155 is 2+1 +5+5 or 13
//any arbitrary integer typed in by the user will be accepted

#include <stdio.h>

int main()
{
    int number, right_digit, sum;
    printf("Enter your number: ");
    scanf("%i", &number);

    sum = 0;
    while (number > 0)
    {
    right_digit = number % 10;
    number = number/10;
    sum += right_digit;
    }
    printf("The sum of the digits of the entered number is: %i\n", sum);

    return 0;
}

//using right_digit to calculate the sum of digits is a genius way. Great!