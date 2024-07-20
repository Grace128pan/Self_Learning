/*
 1. This program will demonstrate the usage of return in methods
 2. a void method can return in one of the two ways---its closing curly brace is reached, or a return statement is executed 
 void myMeth() {
     // ...
     if(done) return; // return when closing curly brace is reached
        // ...
    if(error) return; // return when return statement is executed
 }
 */

 package JPrograms;

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