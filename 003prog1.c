/*
1.write the first program
2.modify it to change its output
3.understand main() function
4. improve program's readability with comments
5. output information with printf() function
*/

#include <stdio.h>
int main(void)
{
    printf("Programming is fun.\nI don't think so.\n");
    printf("And programming in C is even more fun.\n");
    printf("Life is beautiful.\nI am very lucky.\nToday is a very good day.\n");

    int sum;
    sum = 50 + 25;
    printf("The sum of 50 and 25 is %d\n", sum);

    int value1, value2, multiplication;
    value1 = 20;
    value2 = 30;
    multiplication = value1 * value2;
    printf("the multiplication of %i and %i is %i\n", value1, value2, multiplication);

    printf("In C, lowercase letters are significant.\n");
    printf("main() is whwre program execution begins.\n");
    printf("Opening and closing braces encolose program statements in a routine.\n");
    printf("All program statements must be terminated by a semicolon.\n");

    printf("Testing...");
    printf(".....1");
    printf("....2");
    printf("....3");
    printf("\n");

    return 0;
}

//1.lowercase and uppercase are distinct in c programming
/*
2.So, when you see int main(int argc, char *argv[]) in a C program, it means that the program expects to receive command-line arguments, 
and the number of arguments and their values can be accessed through the parameters argc and argv[], respectively, inside the main function.
*/
//Programming in C is really interesting. page 39
//%i or %d means the output in the terminal will be integer
//\n means change to another line