/*
a constructor initializes an object when it is created

you will use constructors to give initial values to the instance variables of the class 
and to perform any other initialization tasks that may be needed when an object is created

all classes have constuctors, whether you define one or not
non-initialized member variables are given default values, which are zero, null and false
for numeric types, reference types and booleans respectively

The simple program will demonstate how to use a simple constructor
 */

 package JPrograms;

 class MyClass {
    int x;
    MyClass() {    //This is the constructor for MyClass
        x = 10;
    }
 }

 class ConsDemo {
    public static void main(String[] args) {
        MyClass t1 = new MyClass();
        MyClass t2 = new MyClass();

        System.out.println(t1.x + " " + t2.x);
    }
 }