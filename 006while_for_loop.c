// finding the greatest common divisor of two negative integer values
/*
problem: find the greatest common divisor of two nonnegative integrs u and v
step1: if v equals to o, then you are done and the gcd is equal to u
step2: calculate temp = u%v, u=v, v=temp, and go back to step1
*/

#include<stdio.h>

int main()
{
    int u, v, temp;
    printf("Please type in two nonnegative integers.\n");
    scanf("%i%i", &u, &v);

    while (v != 0) {    //The loop continues until v becomes zero, which is when the remainder of the division becomes zero.
        temp = u % v;  //Calculate the remainder of dividing u by v and store it in the temp variable. This is done using the modulo operator (%).
        u = v;         //Update the value of u to the current value of v.
        v = temp;     //Update the value of v to the value stored in temp. This effectively shifts v to the remainder of the previous division operation.
    }
    printf("Their greatest common divisor is %i\n", u);

    return 0;
}

/*
1. u=150 v=35
step1: temp = 150 % 35   get 10 as the temp
step2: u = v = 35   v = temp = 10
step3: temp = 35 % 10  get 5 as the new temp
step4: u = v = 10  v = new temp = 5
step5: temp = 10 % 5  get newer temp = 0
step6: u = v = 5  v = newer temp = 0
step7: v == 0, stop while loop print u = 5
*/