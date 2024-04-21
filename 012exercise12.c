#include <stdio.h>

int main() {
    const char *message = "Programming in C is fun\n";
    char message2[] = "You said it\n";     //array of characters
    const char *format = "x = %i\n";   //an integer will be inserted into string when printed
    int x = 100;

    // Set 1
    printf ("Programming in C is fun\n");
    printf ("%s", "Programming in C is fun\n");
    printf ("%s", message);   //prints the string stored in message, in pointers, we do not need to use & to get the address of the variable
    printf (message);

    // Set 2
    printf ("You said it\n");
    printf ("%s", message2);
    printf (message2);
    printf ("%s", &message2[0]); 

    // Set 3
    printf ("said it\n");
    printf (message2 + 4);
    printf ("%s", message2 + 4);
    printf ("%s", &message2[4]);

    // Set 4
    printf ("x = %i\n", x);
    printf (format, x);

    return 0;
}

//these examples shows the difference between pointers and arrays of characters