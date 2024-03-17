#include <stdio.h>

int main(void)
{
    char c, d;
    c = 'd';
    d = c;
    printf("d = %c\n", d);


    return 0;
}
/*
The output "d = d" is expected because the %c format specifier in the printf function prints the character itself, 
not the character as a character constant. 
*/