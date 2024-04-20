/*
page 320
Operations on pointers
1.we can add or subtract interger values from pointers
2.we can compare two pointers
3.we can sbutract two pointers of the same type to get the number of elements between them
4. the actual type of signed integer that is produced by subtracting two pointers(for example, int long int or long long int)
is ptrdiff_t, which is defined in the standard header file<stddef.h>
p = &x[99]
*/

//program 10.15  cptr is used to sequence through the characters pointed to by string until the null character is reached.
//at that point, string is substracted from cptr to obtain the number of characters in the string

//program 10.15 using pointers to find the length of a string

#include <stdio.h>

int stringLength (const char *string) {
    const char *cptr = string;  //This line declares a pointer to a constant character cptr and initializes it to point to the first character of the string pointed to by the parameter string.
    while(*cptr) {
        cptr++;
    }
    return cptr - string;
}

int main(void) {
    int stringLength (const char *string);

    printf("%i  ", stringLength("stringlength test"));
    printf("%i  ", stringLength(""));
    printf("%i\n", stringLength("complete"));

    return 0;
}