/*
escape characters table
\a  audible alert  (produce an audible alert, or bell sound)
\b  backspace  (move the cursor one position to the left)
\f  form feed (move the cursor to the next logical page)
\n  new line (more the cursor to the next line)
\r  carriage return (move the cursor to the beginning of the line)
\t  horizontal tab (insert a horizontal tab character)
\v  vertical tab (insert a vertical tab character)
\\  backslash (insert a backslash character)
\'  single quote (insert a single quote character)
\"  double quote (insert a double quote character)
\?  question mark (insert a question mark character)
\0  null character (insert a null character, it typically terminate strings)
\nnn    octal character value nnn
\xnn    hexadecimal number (it presents base 16 number)
\unnnn universal character name
\Unnnnnnnn  universal character name
*/
#include <stdio.h>

int main() {
   printf("Beep\a\n"); 
   printf("Back\bSpace\n");  //the output will be BacSpace
   printf("Page 1\fpage2 \n");
   /* output is
   Page 1
      page2
   */
  printf("New\nLine\n");
  printf("Overwrite\rHello\n"); //the output will be Hellorite
  printf("Column 1\tColumn 2\n");  //the output will be Column 1   Column 2
  printf("Line 1 \vLine 2\n");
  /* output is
  Line 1 
       Line 2
  */
  printf("This is a backslash:\\\n");  // /*This is a backslash:\ */
  printf("Don\'t\n");  // the output is Don't
  printf("She said, \"Hello!\"\n");  // the output is She said, "Hello!"
  printf("what\?\n");
  
  char str[] = "Grace\0Pan";
  printf("The string is: %s\n", str); // the output is Grace
  /*
  For example, the octal number \101 represents the character A in the ASCII table. This is because 
  the octal encoding of A in the ASCII table is 101. So when you write printf("\101\n"); in a C program, 
  it will output the character A.
  */
   printf("\102\n");  // the output is B
   printf("\x49\n"); // the output is I
   printf("Unicode snowman: \u2603\n"); // the output is Unicode snowman: ☃
   printf("\aSYSTEM SHUT DOWN IN 5 MINUTES!!\n");
   printf("%i\t%i\t%i\n", 1, 2, 3); //add tab(8 spaces)  between the numbers
   printf("\\t is the horizontal tab character\n");
   printf("\"Hello,\" she said.\n");
}

/*
printf("\aSYSTEM SHUT DOWN IN 5 MINUTES!!\n");
while (string[count]) {
   count++;
}
*/