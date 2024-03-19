/*
If we want to successively compare against different values, we can use switch statement.
The general format of switch statement is:
switch (expression)
{
    case constant1:
        statement(s);
        break;
    case constant2:
        statement(s);
        break;
    .
    case constantN:
        statement(s);
        break;
    
    default:
    statement(s);
}
Switch statement can be equivalent to if-else-if ladder.
if (expression == constant1)
{
    statement(s);
}
else if (expression == constant2)
{
    statement(s);
}
else
{
    statement(s);
}
*/
//We can use switch statement to revise the program to evaluate simple expressions.
#include <stdio.h>

int main()
{
    float value1, value2;
    char operator;

    printf("Enter your expressions here.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator)
    {
        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            if (value2 == 0)
            {
                printf("You should not divide anything by zero.\n");
            }
            else
            {
                printf("%.2f\n", value1 / value2);
            }
            break;
        default:
            printf("Sorry, unknown operator.\n");
            break;
    }
    return 0;
}
/*
several similar cases can be listed together as shown below:
switch (operator)
{
    case 'x':
    case 'x':
    case '*':
        statement(s);
        break;
}
*/