/*
1. Sounds travel approximately 1100 feet per second through air. 
2. Knowing the interval between the time you see a lightning bolt and the time the sound reaches you enables you to compute the distance to the lightning.
3. Assum the time interval is 7.2 seconds.

literals
1. literals refer to fixed values that are represented in their human-readable form
2. literals are also commonly called constants
3. 'a' and '%' are both literals(character constants)
4. Java also allows us to use scientific notation for floating-point literals
12 is an int, 12L is long.
5. by default, floating-point literals are of type double.   10.19 is double, 10.19f is float
6. Octal: the number system based on 8 and it uses digits 0-7
   Hexadecimal: the number system based on 16, and it uses digits 0-9 and A-F
7. Java allows us to specify integer literals in octal and hexadecimal forms by using the prefixes 0X and 0x
8. hex = 0xFF //255; oct = 011 // 9 in decimal

9. we can precede the binary number with 0b or 0B, 0b1100 //12

character escape sequence
escape sequence       Description
\'                    single quote
\"                    double quote
\\                    backslash
\n                    newline
\r                    carriage return
\f                    form feed
\t                    horizontal tab
\b                    backspace
\ddd                  octal constant(where ddd is an octal constant)

\s                    space
\endofline            continue line
 */


 
package JPrograms;

public class Sound {
    public static void main(String[] args) {
        double dist;
        dist = 7.2 * 1100;
        System.out.println("The lightning is " + dist + " feet away.");
    }
}
