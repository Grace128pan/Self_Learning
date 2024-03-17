#include <stdio.h>

int main(void)
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               

    int n, triangularNumber;

    printf("Table of Triangular Numbers\n\n");
    printf("n           Sum from 1 to n\n");
    printf("---         ----------------\n");

    triangularNumber = 0;
    for (n = 1; n <= 10; n++)
    {
        triangularNumber += n;
        printf("%2i           %i\n", n, triangularNumber);
    }

    return 0;
}

/*
1.increment operator: n = n + 1    n++   or  ++ n
decrement operator: bean_counter = bean_counter - 1   --bean_counter or bean_counter--
2.right justification: %2i, this ensures 0-9 will have one leading space, and 10 will not have the leading space(integer takes two columns)
*/