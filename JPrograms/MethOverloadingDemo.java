/*
In Java, method overloading allows you to define multiple methods with the same name, but different parameter lists.
class X {
int meth(int a, int b){
}
String meth(int a, int b){
}
}  this is not allowed in java
  to make it work, we need to make sure their parameter lists are not the same
 */

 class ADD {
    //first method that takes two int parameters
    int add(int a, int b) {
        return a + b;
    }

    //overloaded method that takes two int parameters abd ab additional string parameter
    String add(int a, int b, String s) {
        return s + (a + b);
    }
 }
public class MethOverloadingDemo {
    public static void main(String[] args) {
        ADD obj = new ADD();

        //calling the first ADD method
        int sum = obj.add(10, 20);
        System.out.println("Sum: " + sum);

        //calling the second overloaded ADD method
        String result = obj.add(10, 20, "The sum is: ");
        System.out.println(result);
    }
}
