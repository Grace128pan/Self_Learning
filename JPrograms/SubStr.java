/*
 String is immutable, meaning that once a String object is created, it cannot be changed.
 the substring() method returns a new String objecet that contains the specified substring of the invoking string.
 Because a new String object is manufactured that contains the substring, the original string is unaltered, and the rule
 of immutability remains intact.
 the form of substring() that we will be using is shown here:

 String substring(int startIndex, int endIndex)

 java offers a class called StringBuffer that is similar to String, but it can be modified.
 In addition to charAt() method, which obtains the character at a specified location,
 StringBuffer defines setCharAt() method, which sets a character within the string. Java also supplies StringBuilder, which is 
 related to StringBuffer, but also supports strings that can be changed
 */

public class SubStr {
    public static void main(String[] args) {
        String orgstr = "Java makes the web move.";

        //construct a substring
        String substr = orgstr.substring(5, 18); // 5 is the starting index and 18 is the ending index

        System.out.println("Original string is: " + orgstr);
        System.out.println("Substring is: " + substr);
    }
}
