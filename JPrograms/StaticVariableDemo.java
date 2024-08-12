/*
 If all objects share the same variable, we must declare the variable as static, a static variable is shared among
 all instances(objects) of the class, meaning that there is only one copy of the variable, regardless of how many objects are created
 */


class SharedVariable {
    //this is a static variable shared by all instances of the class
    static int sharedCount = 0;

    //this is a non-static variable, each instance of the class has its own copy
    int instanceCount = 0;

    //constructor to increment the counts
    SharedVariable() {
        sharedCount++;
        instanceCount++;
    }

    //method to display the counts
    void displayCounts() {
        System.out.println("Shared count: " + sharedCount);
        System.out.println("Instance count: " + instanceCount);
    }
}

public class StaticVariableDemo {
    public static void main(String[] args) {
        //create the first object
        SharedVariable obj1 = new SharedVariable();
        obj1.displayCounts();

        //create the second object
        SharedVariable obj2 = new SharedVariable();
        obj2.displayCounts();

        //create the third object
        SharedVariable obj3 = new SharedVariable();
        obj3.displayCounts();
    }
}

/*
static variable: shared among all instances. Only one copy exists, and changes are reflected across all objects
instance variable: unique to each objects. each object has its own copy of the variable
so if all objects share the same variable, we must declare that variable as static
 */