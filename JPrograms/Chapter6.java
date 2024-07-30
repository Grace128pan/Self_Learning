/*
chapter 6
a closer look at methods and classes

key skills and concepts
1)control access to methods
2)pass objects to a method
3)overload methods
4)overload constructors
5)use recursion
6)apply static 
7)use inner classes
8)use varargs

This chapter will discuss how to control access to the members of a class, it then discusses the passing and returning of objects, method
overloading, recursion and the use of the keyword static. It also decribes nested classes and variable-length arguments

Controlling access to class members
class provides 2 benefits
1)it links data with the code that manipulates it
2)it provides the means by which access to members can be controlled

There are two basic types of class members: public and private
a public member can be freely accessed by the code defined outside of its clsss
a private member can be accessed only by other methods defined by its class. it is through the use of private members that access is controled

Java's access modifiers
member access control is achieved through the use of three access modifiers: public, private, and protected
The protected modifier applies only when inheritance is involved and is described in Chapter 8

a package is a grouping of classes.
packages are both an organizational and an access control feature, but a discuss of package will be in chapter8

an access modifier precedes the rest of a member's type specification. it must begin a member's declaration statement
eg. public int x;
    private int y;
    protected int z;
    public String errMsg;
    private accountBalance bal;
    private boolean isError(byte status) {//...}

    The following program shows the difference between public and private access
 */


class Alpha {
    private int alpha; //private access
    public int beta; //public access
    int gamma; //default public access
    //methods to access alpha. It is ok for a member of a class to access a private member of the same class

    void setAlpha(int a) {
        alpha = a;
    }

    int getAlpha() {
        return alpha;
    }
}

class Chapter6 {
    public static void main(String[] args) {
        Alpha ob = new Alpha();

        //access to alpha is allowed only through its accessor methods
        ob.setAlpha(50);
        System.out.println("ob.alpha is " + ob.getAlpha());

        //you cannot access alpha like this
        //ob.alpha = 10; //Error! alpha is private

        //These are ok because beta and gamma are public
        ob.beta = 88;
        ob.gamma = 99;
        System.out.println("ob.beta is " + ob.beta);
        System.out.println("ob.gamma is " + ob.gamma);
    }
}
