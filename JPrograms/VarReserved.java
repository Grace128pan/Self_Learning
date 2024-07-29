/*
 The 'var' keyword allows the compiler to infer the type of the local variable based on the initializer expression.
 */

public class VarReserved {
    public static void main(String[] args) {
        var message = "I am not sleepy.";
        var number = 100;
        var doubleNum = 3.56;
        var flag = true;
        var intArr = new int[] {1, 2, 3, 4, 5};

        System.out.println("Message is: " + message);   //string
        System.out.println("Number is: " + number);  //integer
        System.out.println("Double number is: " + doubleNum); //double
        System.out.println("Flag is: " + flag); //boolean

        for(var i: intArr) {
            System.out.println("Number in array is listed as: " + i);  //integers in array
        }
    }
}
