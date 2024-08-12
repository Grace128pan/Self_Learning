/*
 Given a class, write a method that swaps the contents of the objects referred to by two Test object references
 */

class Test2 {
    int a;

    Test2(int i) {
        a = i;
    }
}
public class SwapDemo {
    public static void swap(Test2 ob1, Test2 ob2) {
        int temp = ob1.a;
        ob1.a = ob2.a;
        ob2.a = temp;
    }

    public static void main(String[] args) {
        Test2 ob1 = new Test2(100);
        Test2 ob2 = new Test2(200);
        
        System.out.println("before swap: ");
        System.out.println("ob1.a: " + ob1.a);
        System.out.println("ob2.a: " + ob2.a);

        //call the swap method
        swap(ob1, ob2);

        System.out.println("after swap: ");
        System.out.println("ob1.a is: " + ob1.a);
        System.out.println("ob2.a is: " + ob2.a);
    }

    
}
