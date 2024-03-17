/*
1.unlike for and while loops, do statement guarantee the body of the loop is executed at least once
2.do
    program statement( or statements)
while(loop_expression);
*/

//implementing a revised program to reverse the digits of a number

#include<stdio.h>

int main()
{
    int number, right_digit;
    printf("Enter your number.\n");
    scanf("%i", &number);

    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while (number != 0);
    printf("\n");

    return 0;
}

//do statement makes sure when the condition is not met, at least one output will be displayed in the terminal 

/*
1. break statement: cause the program to immediately exit from the loop it is executing, whether it is for, while or do loop
2. if a break statement is executed from within a set of nested loops, only the innermost loop in which the break is executed is terminated
3.continue statement: cause the loop in which it is executed to be continued
4 Don't use break or continue until you are familiar with writing program loops and gracefully exiting from them
*/