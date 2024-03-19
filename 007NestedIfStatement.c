//Programming in C (page 102)
/*
1. nested if and compound test can be interchangeable in some cases
if (gameIsOver == 0)
{
    if (playerToMove == You) {
        printf("You move\n");  // this line can only be printed in the terminal when gameIsOver == 0 and playerToMove == You
    }
}
if (gameIsOver == 0 && playerToMove == You) 
{
    printf("You move\n");
}
A more practical way might be:
if (gameIsOver == 0)
{
    if (playerToMove == You)
    {
        printf("You move\n");
    }
    else
    {
        printf("My move\n");
    }
}
The else statement is always following the last if statement that does not contain an else
a step further:
if (gameIsOver == 0)
{
    if (playerToMove = You)
    {
        printf("You move\n");
    }
    else
    {
        printf("My move\n");
    }

    else
    {
        printf("The game is over\n");
    }
}
*/

/*
Else if construct: page 105
Three_value logical decision:
if (expression 1)
{
    program statement 1
}
else
{
    if (expression 2)
    {
        program statement 2
    }
    else
    {
        program statement 3
    }

}
n-valued logic decision:
if (expression 1)
{
    program statement 1
else if (expression 2)
    program statement 2
else
    {
    program statement 3
    }
}
 */

/*
program to implement the sign function
*/
#include <stdio.h>

int main()
{
    int number, sign;

    printf("Please type in a number: ");
    scanf("%i", &number);

    if (number < 0)
    {
        sign = -1;
    }
    else if (number == 0)
    {
        sign = 0;
    }
    else{           //must be positive
        sign = 1;
    }
    printf("Sign = %i\n", sign);
    
    return 0;
}