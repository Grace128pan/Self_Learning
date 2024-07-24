/*
Local variable type inference with reference types

var myStr = " This is a string";
var mySubStr = myStr.substring(5, 10);
because a quoted string is used as an initializer, the type of myStr is inferred to be String. The type of mySubStr is also inferred to be String

var can make code easier to read and write
FileInputStrem fin = new FileInputStream("test.txt");
var fin = new FileInputStream("test.txt"); // This is easier to read and write
 */

 class MyClassOne {
    private int i;
    MyClassOne(int k) {
        i=k;
    }
    int geti() {return i;}
    void seti(int k) {if(k>=0) i=k;}
 }
public class VarDemo2 {
    public static void main(String[] args) {
        var mc = new MyClassOne(10); // Notice the use of var here 
        System.out.println("Value of i in mc: " +mc.geti());

        mc.seti(19);
        System.out.println("Value of i in mc is now: " +mc.geti());
    }
}
