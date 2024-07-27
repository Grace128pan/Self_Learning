/*
indexOf() returns the index of the first occurence of the specified character or substring within the string
lastIndexOf() returns the index of the last occurence of the specified character or substring within the string

since all strings are objects of type String, the program will also show how we can call length() and charAt() methods
on the string object
 */

public class indexDemo {
    public static void main(String[] args) {
        String str = "Java is a programming language. Java is a platform independent language";
        System.out.println("Index of 'Java': " + str.indexOf("Java"));
        System.out.println("Last index of 'Java': " + str.lastIndexOf("Java"));

        System.out.println("Length of the string: " + str.length());
        System.out.println("Character at index 5: " + str.charAt(5));
    }
}
