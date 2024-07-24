/*
 A command-line argument is the informtion that directly follows the program's name
 on the command line when it is executed.
 to access the command-line arguments inside a Java program is to use the args parameter

 The following program displays all of the command-line arguments that it is called with.

 we need to direct to the right directory where the file is located and then compile it using the following command
 cd C:\Users\grace\VisualStudioProject\Self_Learning\JPrograms
javac CLDemo.java
java CLDemo one two three
the result will be:
There are 3 command-line arguments.
They are:
arg[0]:one
arg[1]:two
arg[2]:three
 */

class CLDemo {
    public static void main(String[] args) {
        String str = "One two Three";
        System.out.println(str);
        System.out.println("There are " + args.length + " command-line arguments.");

        System.out.println("They are: ");

        for(int i=0; i<args.length; i++) 
            System.out.println("arg[" + i + "]:" + args[i]);
        
    }
}
