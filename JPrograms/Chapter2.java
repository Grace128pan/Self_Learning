/*
chapter2
1. know java's primitive types
2. use literals
3. initialize variables
4. knwo the scope rules of variables within a method
5. use the arithmetic operators
6. use the relational and logical operators
7. understand the assignment operators
8. use the shorthand assignements
9. understand type conversion in assignments
10. cast incompatible types
11. understand type conversion in expressions

Java has two general categories of built-in data types: object-oriented and non-object-oriented
object-oriented types are defined by classes

there are 8 primitive data types in Java(normal binary values); all of Java's other data types are constructed from these primitive types
type       meaning
boolean   represent true or false values
byte      8-bit integer
char      character
double    double-precision floating point
float     single-precision floating point
int       integer
long      long integer
short     short integer

integers
type  width in bits     range
byte  8                 -128 to 127
short 16                -32,768 to 32,767
int  32                -2,147,483,648 to 2,147,483,647
long 64             -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
 */

 /*
The program is to compute the number of cubic inches in 1 cubic mile
  */

package JPrograms;

public class Chapter2 {
    public static void main(String[] args) {
        long ci;
        long im;

        im = 5280 *12;
        ci = im * im * im;

        System.out.println("There are " + ci + " cubic inches in cubic miles.");
    }
}