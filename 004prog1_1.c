#include<stdio.h>

int main(void)
{
    int value1, value2, subtraction;
    value1 = 87;
    value2 = 15;
    subtraction = value1 - value2;
    printf("The result of %d subtracting %d is %d\n", value1, value2, subtraction);

    int sum;
    sum = 25 + 37 - 19;
    printf("The answer is %d\n", sum);

    int answer, result;
    answer = 100;
    result = answer - 10;
    printf("The result is %d\n", result + 5);
    
    return 0;
}