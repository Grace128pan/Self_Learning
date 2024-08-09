/*
 1.There are times when we want to define a class member that will be used independently of any object of that class
2.Normally a class member must be accessed through an object of its class, but it is possible to create a member that can be used by itself
without reference to a specific instance
3.To create such a member, precede its declaration with the keyword static
4. The most common example of a static member is main()
5.Outside the class, to use a static member, we need to specify the name of tis class followed by dot operator
6.If we want to assign the value 10 to a static variable called count that is part of the Timer class, we can use this line Timer.count = 10;
7.similarly, a static method can be called by use of the dot operator on the name of the class
8. a static variable is global variable
 */

 class Timer {
    static int count = 0; //static variable

    static void reset() {
        count =0; //static method
    }

    void start() {
        count++; //instance method
    }
 }
public class StaticDemo {
    public static void main(String[] args) {
        Timer.count = 10; //access a static variable
        System.out.println("Initial count: " + Timer.count);

        Timer.reset(); //call a static method
        System.out.println("After reset: " + Timer.count);

        Timer t1 = new Timer();
        t1.start();
        System.out.println("After starting t1: " + Timer.count);
    }
}
