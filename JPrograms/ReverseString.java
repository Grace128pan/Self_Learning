/*
 this program will show a recursive method that desiplays the contents of a string backwards
 */
public class ReverseString {
    //recursive method to display the contents of a string backwards
    public static void reverse(String str) {
        if(str == null || str.length()<=1) {
            System.out.println(str);

        } else {
            //print the last character of the string
            System.out.print(str.charAt(str.length()-1));
            //recursively call reverse on the substring excluding the last character
            reverse(str.substring(0, str.length()-1));
        }
    }

    public static void main(String[] args) {
        String myString = "Hello, World!";

        System.out.println("Original String is: " + myString);
        reverse(myString);
        
    }
}
