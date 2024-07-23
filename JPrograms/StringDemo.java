/*
 In Java, strings are objects. When you create a String literals, that means you create a String object.

 You can construct a String just like you construct any other types of object: by using new and calling the String constructor
 String str = new String("Hello");

 You can also construct a String from another String
 String str = new String("Hello Grace");
 String str2 = new String(str);// str2 will be "Hello Grace"

 Once you have created a String object, you can use it anywhere that a quoted string is allowed

 */

public class StringDemo {
    public static void main(String[] args) {
        //declare strings in various ways
        String str1 = new String("Learning Java is quite fun.");
        String str2 = "Java strings are objects and they are constructed in various ways.";
        String str3 = new String(str2);

        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);

    }
}
