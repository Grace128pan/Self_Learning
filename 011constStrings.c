/*
page 261
More on constant strings

*/

#include <stdio.h>

int main() {
char letters[] = {"abcdefghijklmnopqrstuvwxyz\
ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
printf("letters: %s\n",  letters);

char string[] = {"one" "two" "three"};
printf("string: %s\n", string); //the output will be onetwothree.

char string1[] = {"hi"
"there"};
printf("%s\n", string1); //the output will be hithere.
return 0;
}
/*
So, the \ in this context is used to join two lines of code together, 
allowing the long string literal to be represented more clearly across multiple lines.
for readability and avoid errors
*/