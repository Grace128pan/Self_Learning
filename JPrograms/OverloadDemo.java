/*
 In Java two or more methods within the same class can share the same name, as long as theirparameter declarations are different
 when this is the case, the methods are said to be overloaded, and the process is referred to as method overloading

 the type and or number of the parameters of each overloaded method must differ
 overloaded methods may differ in their return types too
 */

//the following program will demonstrate method overloading

class Overload {
    void ovlDemo() {
        System.out.println("No parameters.");
    }

    //overload ovlDemo for one integer paramter
    void ovlDemo(int a) {
        System.out.println("One parameter: " + a);
    }

    //void ovlDemo for two integer paramters
    int ovlDemo(int a, int b) {
        System.out.println("Two parameters: " + a + " " + b);
        return a + b;
    }

    //overload ovlDemo for two double parameters
    double ovlDemo(double a, double b) {
        System.out.println("Two double parameters: " + a + " " + b);
        return a + b;
    }
}
public class OverloadDemo {
    public static void main(String[] args) {
        Overload ob = new Overload();
        int resI;
        double resD;

        //call all versions of ovlDemo
        ob.ovlDemo();
        System.out.println();

        ob.ovlDemo(2);
        System.out.println();

        resI = ob.ovlDemo(4, 6);
        System.out.println("result of ob.ovlDemo(4, 6): " + resI);

        resD = ob.ovlDemo(1.1, 2.32);
        System.out.println("Result of ob.ovlDemo(1.1, 2.32): " + resD);
    }
}

/*
 it is not okay to just differ in return type for overloading
 void ovlDemo(int a) {
    System.out.println("One parameter: " + a);
 }
int ovlDemo(int a) {
    System.out.println("One parameter: " + a);
    return a*a;
}
 */