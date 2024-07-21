/*
 Using two separate sttatements, show how to declar an object called counter of a class called MyCounter
 */

 package JPrograms;

 //declare MyCounter class

 class MyCounter {
    int count; //an example field

    //constructor
    MyCounter(int startCount) {
        count = startCount;
    }

    //method to increment the count
    void increment() {
        count++;
    }

    //method to display the current count
    void displayCount() {
        System.out.println("Current count is: " + count);
    }
 }

 public class MyCounterTest {
    public static void main(String[] args) {
        //first statement: declare a variable of type MyCounter
        MyCounter counter;
        //second statement: initialize the MyCounter object
        counter = new MyCounter(0);

        //using the object
        counter.increment();
        counter.displayCount();
    }
 }