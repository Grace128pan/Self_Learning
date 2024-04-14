/*
Inputting character strings
1.scanf() function can be used with %s format specifier to read in a string of characters up to a blank space, tab character or
the end of the line
char string[81];
scanf("%s", string);
2. when read floats or integers, we need to use & operator to get the address of the variable, but
when reading strings, we do not use the & operator
*/
//program 9.5 reading strings with scanf()

#include <stdio.h>

int main(void) {
    char s1[81], s2[81], s3[81];

    printf("Enter text:\n");
    scanf("%s%s%s", s1, s2, s3);

    printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
    return 0;
}

//if you want scanf() to know how many strings it will read, you can do this:
//scanf("%80s%80s%80s", s1, s2, s3); //including null character, the maximum number of characters is 80