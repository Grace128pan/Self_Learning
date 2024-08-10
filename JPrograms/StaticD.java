//use a static variable
class StaDemo {
    int x; // anormal instance variable
    static int y; // a static variable, there is a copy of y for all objects to share

    //return the sum of the instance variable x and the static variable y
    int sum() {
        return x + y;
    }
}

public class StaticD {
    public static void main(String[] args) {
        StaDemo ob1 = new StaDemo();
        StaDemo ob2 = new StaDemo();

        //each object has its own copy of x, an instance variable
        ob1.x = 10;
        ob2.x = 20;
        System.out.println("Of course, ob1.x and ob2.x are independent");
        System.out.println("ob1.x: " + ob1.x + "\nob2.x: " + ob2.x);
        System.out.println();

        //each object shares one copy of y, a static variable
        System.out.println("The static variable y is shared by all objects.");
        StaDemo.y = 19;
        System.out.println("Set staDemo.y to 19.");

        System.out.println("ob1.sum(): " + ob1.sum());
        System.out.println("ob2.sum(): " + ob2.sum());
        System.out.println();

        StaDemo.y = 100;
        System.out.println("Change StaDemo.y to 100.");

        System.out.println("ob1.sum(): " + ob1.sum());
        System.out.println("ob2.sum(): " + ob2.sum());
        System.out.println();
    }
}
