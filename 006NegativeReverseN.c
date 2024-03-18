//Reverse the digits of a number(what if we input a negative number)

#include <stdio.h>

int main()
{
    int number, right_digit;
    printf("Enter yoru number.\n");
    scanf("%i", &number);

    while (number!=0)
    {
        right_digit = number % 10;
        printf("%i",right_digit);
        number /= 10;
    }

    printf("\n");

    return 0;
}

//Interestingly, when we input -13579, we will get the result of -9-7-5-3-1