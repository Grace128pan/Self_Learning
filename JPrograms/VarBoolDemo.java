/*
Var keyword can be used to declare local variables with initializers. 
The type of variable can be inferred by the compiler based on the initializer expression.

var is reserved keyword, so it can not be used as the name of a variable or a class

var can not be used to declare array of var, var[] arr = new var[5]; is not allowed
double[] avgTems = new double[7] is allowed

var can not be used for multiple variable declarations in a single statement. Instead each variable should be declared separately.
 */

 class VarBoolDemo {
    public static void main(String[] args) {
        var done = false;

        System.out.println("Done is: " + done);

        done = true;
        System.out.println("Done now is changed to: " + done);

        int alpha = 34;
        int beta = 56;
        var sum = alpha + beta;
        System.out.println("Sum of alpha and beta is: " + sum);
    }
 }