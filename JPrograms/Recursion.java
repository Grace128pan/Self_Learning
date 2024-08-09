/*
 
Recursion: In Java, a method can call itself. This process is called recursion and a method that calls itself
is called recursive

When writing recursive methods, you must have a conditional statement, such as an if, somewhere to force the method to return without the
recursive call being executed. Otherwise, the method would continue to call itself indefinitely.
 */
class Factorial {
    //This is a recursive function
    int factR(int n) {
        int result;
        if(n==1) return 1;
        result = factR(n-1)*n; //execute the recursive call to factR();
        return result;
    }

    //This is an iterative equivalent
    int factI(int n) {
        int t, result;
        result = 1;
        for(t=1; t<=n; t++) result *=t;
        return result;
    }
}
public class Recursion {
    public static void main(String[] args) {
        Factorial f = new Factorial();

        System.out.println("Factorials using recursive method.");
        System.out.println("factorial of 3 is " + f.factR(3));
        System.out.println("Factorial of 4 is " + f.factR(4));
        System.out.println("factorial of 5 is " + f.factR(5));

        System.out.println("Factorials using iterative method.");
        System.out.println("factorial of 3 is " + f.factI(3));
        System.out.println("factorial of 4 is " + f.factI(4));
        System.out.println("factorial of 5 is " + f.factI(5));
    }
}
