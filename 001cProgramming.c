// C is kind of a system programming language and it can also be used to write major programs
// fundamental data types in C are: characters, integers and floating point languages
// there are also hierarchy of derived data types: pointers, arrays, structures, unions
// expressions are formed from operators and operands
// any expressions including an assignment or a function call, can be a statement
// pointers provide for amchine-independent address arithmetic
/*C provides control-flow constructions: 
1.statement grouping 2.decision making(if else) 3.selecting one of a set of possible value(switch)
4.looping with the termination test at the top(while, for) or at the bottom(while)
5.early loop exit(break)
*/
/* functions may return values of basic types, structures, unions, pointers
1. any function may be called recursively
2. local variables are typically automatic, or created anew with each invocation
3. function definition may not be nested, but variables may be decliared in a block-structured fashion
4. functions of a c program may exist in separate source files that are compiled separately
5. variables may be internal to a function, edxterinal but known only within a single source file or visible to the entire program
*/
//a preprocessing step performs macro substitution on program text, inclusion of other source files and conditional compilation
// C provides no operations to deal directly with composite objects such as character strings, sets, lists or arrays.
// All of these high-level mechanisms must be provided by explicitly called functions
// C offers only straightforward, single-thread control flow: tests, loops, grouping, sub-programs
//a function declaration can include a description of the arguments of the function, the definition syntax changes to match
//C provides are \t for tab, \b for backspace, \" for the double quote and \\ for the backslash 
#include <stdio.h>

int main() {
    printf("hello, world\n");
    return 0;
}


