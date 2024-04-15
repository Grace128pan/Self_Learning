/*
1. getchar() is typically used in a loop to read characters until a specific condition is met.
2.gets() (Not recommended due to potential buffer overflow vulnerabilities. Use fgets() instead):
gets() reads a line from the standard input stream and stores it into a string until a newline character or 
the end-of-file (EOF) is encountered.
It doesn't limit the number of characters read, so it's prone to buffer overflow if the input exceeds 
the size of the destination buffer.
3. fgets():
fgets() is a safer alternative to gets() for reading a line from the standard input stream.
It reads up to a specified number of characters (or until a newline character or EOF) and stores them into the 
specified buffer.
*/

// how to use getchar() to read a single character from the standard input stream.
/*
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    c = getchar(); // Reads a single character
    printf("You entered: %c\n", c);
    return 0;
}

*/

//how to use gets() to read a line of input from the standard input stream.(not recommended)
/*
#include <stdio.h>

int main() {
    char string[100];
    printf("Enter a string: ");
    gets(string); // Reads a line of input
    printf("You entered: %s\n", string);
    return 0;
}
*/

#include <stdio.h>

int main() {
    char buffer[100];
    
    printf("Enter a string: ");
    fgets(buffer, sizeof(buffer), stdin); // Reads a line of text from standard input, stdin represents standard input stream
    
    printf("You entered: %s\n", buffer); //buffer means temperory storage
    
    return 0;
}
