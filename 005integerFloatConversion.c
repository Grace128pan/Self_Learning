//Conversion between integer values and floating-point values

#include<stdio.h>

int main(void)
{
    float  fl = 123.125, f2;
    int il, i2 = -150;
    char c = 'a';
    float m = (float) 6 / (float) 4 ;

    il = fl;   //floating to integer conversion: the decimal portion get truncated, only the interger portion is stored in il
    printf("%f assigned to an int produces %i\n", fl, il);

    fl = i2; //integer to floating conversion: stored in float variable fl
    printf("%i assigned to a float procudes %f\n", i2, fl);

    fl = i2 / 100; //integer divided by integer: we only get the integer part and the decimal part is discarded
    printf("%i divided by 100 produces %f\n", i2, fl);

    f2 = i2 / 100.0; //integer divided by a float: any operation between two values in C is performed as a floating point operation if either value is a floating point variable or constant
    printf("%i divided by 100.0 produces %f\n", i2, f2);

    f2 = (float) i2 / 100; //type cast operator
    printf("(float)%i divided by 100 produces %f\n", i2, f2);

    printf("the type cast operator (float) m is %f\n", m);

    return 0;
}

/*
1.type cast operator has a higher precedence than all the arithmetic operators except the unary minus and unary plus
2. you can always use () to force the terms to be evaluated in any desired order
eg. in C, (int)29.55 + (int) 21.99 is evaluated as 29 + 21
(float)6 / (float)4 will give the output of 1.5
*/