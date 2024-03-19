/*
write a program to reverse digits, but should handle well when the input is negative
for example,
-8645 should be reversed as -5468
typically, 0 means false and 1 means true in C programming for boolean values.
int flag = 0;
if (flag==1)
{
    printf("flag is true");
}
else
{
    printf("flag is false");
}
*/
/*
#include <stdio.h>

int main()
{
    int num, reverse = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    if (num < 0)
    {
        num = -num;
    }
    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    if (temp < 0)
    {
        printf("The reverse of the number is: -%d\n", reverse);
    }
    else
    {
        printf("The reverse of the number is: %d\n", reverse);
    }
    return 0;
}

*/

/*
step1: num = 124, reverse=0 +124%10 =4 
step2: num =12 reverse=4*10+12%10 =42
step3: num=1 reverse=42*10+1%10= 421
*/

#include <stdio.h>

int main() 
{
    int number, right_digit;
    printf("Enter your number: ");
    scanf("%i", &number);
    _Bool isNegative;

    // Check if the number is negative
    if (number < 0) 
    {
        isNegative = 1;
        // Make the number positive for processing
        number = -number;

        // Print the negative sign at the end
    }

    // Reverse and print the digits
    while (number != 0) 
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number /= 10;
    }
    
    if (isNegative == 1)
    {
        printf("-");
    }
        
    printf("\n");

    return 0;
}

//while will continue doing the execution until the condition is false, if is not loop, it will only execute once.

