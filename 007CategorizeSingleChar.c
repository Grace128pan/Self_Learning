/*
1.categorize a single character that is entered at the terminal
analyze whether the character typed is an alphabetic character(a-z or A-Z), a digit(0-9) or a special character; %c are used in the scanf() call
*/

#include <stdio.h>

int main ()
{
    char c;

    printf("Enter a single character: \n");
    scanf("%c", &c);

    if ((c >='a' && c <= 'z') || ( c >= 'A') && (c <= 'z') )
    {
        printf("It's an alphabetic character.\n");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("It's a digit.\n");
    }
    else
    {
        printf("it's a special character.\n");
    }

    return 0;
    
}

// in practice, we can use #include<ctype.h>, then we use islower() and isupper() to avoid the internal representation issues
//page 109