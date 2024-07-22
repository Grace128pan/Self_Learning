/*
This program will show how to return a value from a method
 */

 package JPrograms;

 class addition {
    int add(int a, int b) {
        int sum = a + b;
        return sum;
    }

    void displayAddition(int a, int b) {
        System.out.println("The sum of " + a + " and " + b + " is " + add(a, b));
    }
 }

 class ReturnDemo {
    public static void main(String[] args) {
        addition obj1 = new addition();
        obj1.displayAddition(28, 12);
    }
 }