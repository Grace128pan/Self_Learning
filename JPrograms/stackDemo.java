/*
The complement of a queue is a stack. it uses first-in, last-out(FILO) order. It is often likened to a stack of plates.
the first plate put on the table is the last plate used. we can create stack that can hold characters, using push() and pop() methods
 */

 class Stack {
        private char[] stackArray; // this array holds the stack
        private int top; // this is the index of the top of the stack

        //constructor to create a stack of a given size
        Stack(int size) {
            stackArray = new char[size]; //initialize the stack array
            top = -1; // there are no items in the stack yet, initialize top to be -1 to indicate an empty stack
        }

        //method to push a character onto the stack
        public void push(char ch) {
            if(top==stackArray.length-1) {
                System.out.println("Stack is full. Cannot push " + ch);
            } else {
                stackArray[++top] = ch; //increment top and then insert ch  //here, we are using the prefix increment operator to increment top before using it as an index to insert ch into the stackArray
                System.out.println("Pushed " + ch + " onto the stack.");
            }
        }

        //method to pop a character from the stack
        public char pop() {
            if(top<0) {
                System.out.println("stack is empty. cannot pop.");
                return '\0'; //return null character if stack is empty  
            } else {
                char ch = stackArray[top--]; //retrieve the top character and then decrement top    
                System.out.println("Popped " + ch + " from the stack.");
                return ch;
            }
        }
 }

public class stackDemo {
    public static void main(String[] args) {
        Stack stack =  new Stack(5); //create a stack of size 5;

        //push some characters onto the stack
        stack.push('A');
        stack.push('B');
        stack.push('C');
        stack.push('D');
        stack.push('E');

        //attempt to push onto a full stack
        stack.push('F');

        //pop characters from the stack 
        stack.pop();
        stack.pop();
        stack.pop();
        stack.pop();
        stack.pop();

        //attempt to pop from an empty stack
        stack.pop();
    }
}
