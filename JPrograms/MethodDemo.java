/*
 1. This program will demonstrate the usage of return in methods
 2. a void method can return in one of the two ways---its closing curly brace is reached, or a return statement is executed 
 void myMeth() {
     // ...
     if(done) return; // return when closing curly brace is reached
        // ...
    if(error) return; // return when return statement is executed
 }
3. return value: such as sqrt() method returns the value contains the outcome of some calculations; In other cases, the return value indicate success or failure(a status code)
4.non-void method can return a value
 */


 public class MethodDemo {
    public static void main(String[] args) {
        myMethod();
            
        } 
    static void myMethod() {
        for(int i=0; i<10; i++) {
            if(i == 5) return;
            System.out.println(i);
        }
    }
 }