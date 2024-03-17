// reversing the digits of a number

#include <stdio.h>

int main()
{
    int number, right_digit;

    printf("Enter your number:  \n");
    scanf("%i", &number);

    while(number!=0)
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }

    printf("\n");

    return 0;
}

/*
step1: input 1241 right_digit = 1241 % 10, we get 1, number = 1241 / 10 = 124
step2: right_digit = 124 % 10, we get the remainder 4, number = 124/10 = 12
step3: right_digit = 12 % 10, we get the remainder 2, number = 12/10 =1
step4: right_digit = 1 % 12, we get the remainder 1, number = 1/10 = 0 (integer divide integer, we only gets the integer parts)
*/