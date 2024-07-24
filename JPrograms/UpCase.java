/*
 Some var restrictions
 1.only one variable can be declared at a time
 2. a variable can not use null as an initializer
 3. the variable being declared can not be used by the initializer expression
 4. We can declare an array type using var, we can not use var with an array initializer

 var myArray = new int[10]; //valid
 var myArry = {1, 2, 3}; // wrong

 bitwise operators
 1) the bitwise operators can be used on values of type long, int, short, char, or byte
 2) bitwise operations can not be used on boolean, float, or double, or class types

 operator     result
 &          bitwise AND
 |          bitwise OR
 ^          bitwise XOR
 >>         shift right
 >>>        unsigned shift right
 <<         shift left
 ~          One's complement(unary NOT)

 the Bitwise AND, OR, and XOR operators are used to compare the individual bits of two values
 The following table shows the outcome of each operation using 1's and 0's
 p     q      p & q     p | q     p ^ q  ~p
 0     0       0         0         0      1
 1     0       0         1         1      0
 0     1       0         1         1      1
 1     1       1         1         0      0
 */
public class UpCase {
    
}
