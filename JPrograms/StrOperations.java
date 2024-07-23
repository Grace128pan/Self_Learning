/*
1. The String contains several methods that operate on strings. Here are the general forms for a few:
boolean equals(str)   returns true if the invoking string contains the same character sequence as str
int length()          obtains the length of a string
char charAt(index)    Obtains the character at the index specified by index
int compareTo(str)    returns less than zero if the invoking string is less than str, greater than zero if the invoking string is greater than str, and zero if the strings are equal
int indexOf(str)      searches the invoking string for the substring specified by str, returns the index of the first match or -1 on failure
int lastIndexOf(str)  searches the invoking string for the substring specified by str. returns the index of the last match or -1 on failure
 
The equals() method compares the character sequences of the two String objects for equality
Applying the == to two String  references simply determines whether the two references refer to the same object
*/

 //This program will demonstrate some of the String methods
public class StrOperations {
    public static void main(String[] args) {
        String str1 = "When it comes to web programming, Jave is #1.";
        String str2 = new String(str1);
        String str3 = "Java strings are powerful.";
        int result, idx;


        System.out.println("length of str1: " + str1.length());

        //display str1, one character at a time
        for(int i=0; i<str1.length(); i++)
            System.out.print(str1.charAt(i));
        System.out.println();

        if(str1.equals(str2))
            System.out.println("Str1 equals str2");
        else 
            System.out.println("Str1 does not equal str2");

        if(str1.equals(str3))
            System.out.println("str1 equals str3");
        else
            System.out.println("str1 does not equal str2");
        
        result = str1.compareTo(str3);
        if(result == 0)
            System.out.println("str1 and str3 are equal.");
        else if(result <0)
            System.out.println("str1 is less than str3");
        else
            System.out.println("str1 is greater than str3");
        
        //assign a new string to str2
        str2 = "super, I am supposed to be super successful in the future.";

        idx = str2.indexOf("super");
        System.out.println("Index of the first occurrence of super: " +idx);
        idx = str2.lastIndexOf("super");
        System.out.println("Index of the last occurrence of super: " +idx);

        //concatenate two strings using the + operator
        String str5 = "One";
        String str6 = "Two";
        String str7 = str5 + " " + str6;
        System.out.println("Concatenated string: " + str7);
    }
}
