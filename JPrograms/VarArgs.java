/*
variable-length arguments
1.sometimes we need to create a method that takes a variable number of arguments, based on the precise usage
eg. a method that opens an Inernet connection might take a user name, password, file name, protocol and so on, but supply
defaults if some of this information is not provided
in this situation, it is convenient to pass only the arguments to which the defaults did not apply
To create such a method implies that there must be some way to create a list of arguments that is variable in length, rather than fixed
2.varargs: variable-length arguments
it is a method that takes a variable number of arguments
the parameter list for a varargs method is not fixed, but rather variable in length
thus, a varargs method can take a variable number of arguments

3. a varargs parameter is specified by three periods(...) after the type
 */

 public class VarArgs {
    //varTest() uses a varargs parameter
    static void VaTest(int ...v) {
        System.out.println("Number of args: " + v.length);
        System.out.println("Contents: ");

        for(int i=0; i<v.length; i++) {
            System.out.println(" arg " + i + ": " + v[i]);
        }
        System.out.println();
    }

    
     public static void main(String[] args) {
        //calling vaTest() with different numbers of arguments
         VaTest(10);// 1 argument
         VaTest(1, 2, 4); // 3 arguments
         VaTest(); // no arguments
    }

}