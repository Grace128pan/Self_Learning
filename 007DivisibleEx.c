/*
chapter5 exercise3: write a program to let users type in two integers and display the result with three decimal place accuracy, remember to
check for division by zero.
*/

# include <stdio.h>

int main ()
{
    int number1, number2;
    float result;

    printf("Type in two numbers here:  ");
    scanf("%i %i", &number1, &number2);

    result = (float) number1 / number2;
    if (number2 == 0)
    {
        printf("Division by zero error.\n");
    }
    else
    {
        printf("%.3f\n", result);
    }

    return 0;
}