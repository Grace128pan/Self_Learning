/*
 *This program shows how a method called myMeth() is declared if it has a return type of double and has two int parameters called a and b
 */


 class Meth {
    
    double myMeth(int a, int b) {
        return a + b;
    }

    double fairSalary (int a, int b) {
        return (a+b) *0.8;
    }

    void printSalary(int a, int b) {
        System.out.println("The fair salary is: " + fairSalary(a, b) + " thousand euros");
    }
 }

 public class MyMethod {
    public static void main(String[] args) {
        Meth mySalary = new Meth();
        System.out.println(mySalary.myMeth(10, 20));
        mySalary.printSalary(10, 20);   
        
    }
 }