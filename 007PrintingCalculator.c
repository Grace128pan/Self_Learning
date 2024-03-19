/*
Chapter5 exercise4
write a program that acts as a simple printing calculator, the program should alllow
users to type in expressions of the form: number  operator
+ - * / should be recoginized by the program
s: this operator tells the program to set the accumulator to the typed-in number
e: end of program
make certain that the program detects division by zero and also checks for unknown operators
use switch case to solve the problem
*/
#include <stdio.h>

int main()
{
    float accumulator = 0.0; // Initialize accumulator
    float number;
    char operator;

    printf("Begin Calculations\n");

    do {
        printf("= %.2f Contents of Accumulator\n", accumulator);
        printf("Enter your expression: ");
        scanf("%f %c", &number, &operator);

        switch (operator)
        {
        case 's':
        case 'S':
            accumulator = number; // Set accumulator to the entered number
            printf("= %.2f Contents of Accumulator\n", accumulator);
            break;
        case '+':
            accumulator += number; // Add the entered number to the accumulator
            break;
        case '-':
            accumulator -= number; // Subtract the entered number from the accumulator
            break;
        case 'X':
        case 'x':
        case '*':
            accumulator *= number; // Multiply the accumulator by the entered number
            break;
        case '/':
            if (number == 0)
            {
                printf("You should not divide anything by zero.\n");
            }
            else
            {
                accumulator /= number; // Divide the accumulator by the entered number
            }
            break;
        case 'e':
        case 'E':
            printf("End of program.\n");
            break;
        default:
            printf("Sorry, unknown operator.\n");
        }
    } while (operator != 'e' && operator != 'E'); // Continue until 'e' (End of program) is entered

    return 0;
}

//there is another way of solving the uppercase and lowercase problem
/*
#include <stdio.h>
#include <ctype.h> // Required for tolower() function

int main()
{
    float accumulator = 0.0; // Initialize accumulator
    float number;
    char operator;

    printf("Begin Calculations\n");

    do {
        printf("= %.2f Contents of Accumulator\n", accumulator);
        printf("Enter your expression: ");
        scanf("%f %c", &number, &operator);

        // Convert operator to lowercase
        operator = tolower(operator);

        switch (operator)
        {
        case 's':
            accumulator = number; // Set accumulator to the entered number
            printf("= %.2f Contents of Accumulator\n", accumulator);
            break;
        case '+':
            accumulator += number; // Add the entered number to the accumulator
            break;
        case '-':
            accumulator -= number; // Subtract the entered number from the accumulator
            break;
        case 'x':
        case '*':
            accumulator *= number; // Multiply the accumulator by the entered number
            break;
        case '/':
            if (number == 0)
            {
                printf("You should not divide anything by zero.\n");
            }
            else
            {
                accumulator /= number; // Divide the accumulator by the entered number
            }
            break;
        case 'e':
            printf("End of program.\n");
            break;
        default:
            printf("Sorry, unknown operator.\n");
        }
    } while (operator != 'e'); // Continue until 'e' (End of program) is entered

    return 0;
}

*/