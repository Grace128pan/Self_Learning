// a simple algorithm to calculate the sum of the first n positive integers

/*
#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    printf("Calculating the sum of the first 10 positive integers.\n");

    //use a for loop to calculate the first 10 positive integers
    for(i = 1; i <=10; i++) {
        sum += i;
    }

    printf("The sum of the first 10 positive integers is: %d\n", sum);

    return 0;
}
*/

/* while loop to print numbers */
/*#include <stdio.h>

int main() {
    int i = 1;

    printf("Printing numbers from 1 to 10:\n");

    //loop to print numbers from 1 to 10
    while(i<=10) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}*/

/* a simple calculators that performs addition, subtraction, multiplication, and division */

#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    // Input operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // Note the space before %c to consume any whitespace characters

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on the operator
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            } else {
                printf("Error! Division by zero.");
            }
            break;
        default:
            printf("Error! Invalid operator.");
    }

    return 0;
}


