//page 152
 /*
 1. understand the basics of functions
 2. explain local, global, automatc, and static variables
 3. using single-dimensional and multi-dimensional arrays with functions
 4. return data from functions
 5. use functions to execute top-down programming
 6. call functions within other functions, as well as recursive functions
 */
/*
#include <stdio.h>

int main() {
    printf("Programming is fun.\n");
    return 0;
}
*/
//7.1 program-writing a function in C and call that function from the main function
#include <stdio.h>

void printMessage(void) {
    printf("I love Programming so much!\n");
}

int main(void) {
    printMessage();
    return 0;
}

//this is a simple program to write a function and use main function to call that function