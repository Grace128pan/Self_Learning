//more arithmetic expressions

#include<stdio.h>

int main(void)
{
    int a = 25;
    int b = 2;

    float c = 25.0;
    float d = 2.0;

    printf("6 + a / 5 * b = %d\n", 6 + a / 5 * b);
    printf("a / b * b = %d\n", a / b * b);      // divide two integers, you always get integer results, that's why here we got output 24 instead of 25
    printf("c / d * d = %f\n", c /d * d);
    printf("-a = %d \n", -a);

    return 0;
}

// we we divide integers, we always get integer results and the decimal places are lost, no rounding happens there.

//an unary operator: one operates on a single value, as opposed to a binary operator, which operates on two values
// - sign has two roles: in binary operator, it is used for subtracting two values; in unary operator, it negates a value
//the unary minus operator -: has higher precedence than all other arithmetic operators, except for the unary plus operator (+), which
// has the same precedences