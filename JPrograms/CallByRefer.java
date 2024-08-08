/*
call by reference means a reference to an argument(not the value of the argument) is passed to the parameter
inside this subroutine, the reference is used to access the actual argument specified in the call
This means that changes made to the parameter will affect the argument used to call the subroutine
 */
class Test1 {
    int m, n;

    Test1(int i, int j) {
        m = i;
        n = j;
    }

    void meth1(Test1 obj) {
        obj.m *= 2;
        obj.n /= 2;
    }
}

public class CallByRefer {
    public static void main(String[] args) {
        Test1 ob = new Test1(15, 20);

        System.out.println("ob.m and ob.n before call: " + ob.m + " " + ob.n);
        ob.meth1(ob);
        System.out.println("ob.m and ob.n after call: " + ob.m + " " + ob.n);
    }
}
