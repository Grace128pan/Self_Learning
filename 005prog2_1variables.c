#include <stdio.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e11;
    char charVar = 'W';
    long int numberOfPoints = 131071100L;
    int octalNumber = 016;
    long long int maxAllowedStorage;
    long double us_deficit_2004;


    _Bool boolVar = 0;

    printf("integerVar = %d\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("doubleVar= %e\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = % d\n", boolVar);

    printf("the value is %ld\n", numberOfPoints);
    printf("the octal number is %o\n", octalNumber);
    printf("the value is %lld\n", maxAllowedStorage);
    printf("the long double is %lf\n", us_deficit_2004);
   

    return 0;
}

/*
1. %f characters are used to display values in a standard manner
2. unless told otherwise, printf() always displays a float or double value to six decimal places rounded
3. %e will display the float or double value in scientific notation, six decimal places are automatically displayed
4. %g let printf() decide whether to display the floating point based on the value of the exponent
1)if the exponent <-4 or >5, %e is used; 2)otherwise, %f is used; it will automatically removes from the display any trailing zeroes
if no digits follow the decimal point, it does not display that either
5. %c displays the single character
6. %d or %i displays ineger format
7. %lld or %lli: long long integers, is guaranteed to be at least 64 bits wide
*/

/*
type specifiers: long, long long,short, unsigned, signed
long: long int declaration declared integer variable is of extended range on some computer systems
1. on many systems, int and long int has the same range and can be used to store integer values up to 32-bits wide(2^31 -1 or 2147483647)
2. a constant value of long int is formed by optionally appending the letter l(upper or lowercase) onto the end of the integer constant
3. octal format: 015 represents 13(1*8 + 5); 077 represents 63(7*8 + 7)
4. %ld or % li: long int; %lo: long octal number(8-based);%lx:long hexadecimal
5. %lf: display a long double value in floating point notation; %le: display long double value in scientific notation
%lg: tells prinf() to choose between %lf and %le  
long double could be: 1.234e + 7L
6. short int: store faily small integer values, the ammount of space allocated for a short int will not be less than 16 bits
short int can be displayed by placing h in front of any of the normal integer conversion character%: %hi, %ho, %hx(short 16-based)
7. unsigned int counter: counter only store positive numbers 
unsigned int constant: placing U or u after the constant, such as 0x00ffU
we can combine u or U and L or l when writing the integer constant such as 20000UL(unsigned long)
8. unsigned long; int; long int; unsigned long int; long long int;unsighed long long int; short int; unsigned int;
long long int; long int; short int; unsigned int: here the word int could be omitted, so unsigned int counter = unsigned counter
9. we can also declare char variables to be unsigned
10.signed qualifier can be used to explictly tell the compiler that a particular variable is a signed quantity
*/

/*
summary of basic data types and qualifiers
type                 constant examples             printf chars
char                 'a', '\n'                      %c
_Bool                 0, 1                         %i, %u
short int                                          %hi, %hx, %ho
unsigned short int                                 %hi, %hx, %ho
int                  12, -97, 0xFFE0,0177          %i, %x, %o
unsigned int         12u, 100U,0XFFu               %u, %x, %o
long int             12L,-2001,0xffffL             %li, %lx, %o
unsigned long int    12UL,100ul,0xffeeUL           %lu, %lx, %lo
long long int        0xe5e5e5e5LL,500ll            %lli, %llx, %llo
unsigned long long int  12ull,0xffeeULL            %llu, %llx, %ll0
float               12.34f,3.1e-5f,0x1.5p10,0x1p-1  %f, %e, %g, %a
double              12.34,3.1e-5, 0x.1p3           %f, %e, %g, %a
long double         12.341, 3.1e-51                %Lf, %Le, %Lg
*/