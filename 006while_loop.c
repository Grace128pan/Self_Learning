// the while loop will process until the expression finally evaluates as false, at which point the loop is terminated
// Introducting the while statement
#include<stdio.h>

int main()
{
    int count = 1;
    while (count <= 5) {
        printf("%d\n", count);
        count++;
    }
    return 0;
}
/*
a for statement can always be translated into an equivalent while statement and vice and versa
1. for (init_expression; loop_condition; loop_expression)
{
    program statement(or statements)
}
2. init_expression;
while (loop_condition)
{
    program statement(or statements)
    loop expressions;
}
*/