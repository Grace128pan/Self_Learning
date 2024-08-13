/*
one way to resolve ambiguity in overloaded varargs methods is by adding a non-varargs method that explicitly handles the case where no arguments are passed
 */


public class ResolveAmbiguity {
    //non-varargs method to handle to no-argument case
    public static void getValue() {
        System.out.println("Called getValue() with no arguments.");
    }

    //overloaded varargs method 1
    public static void getValue(int ...numbers) {
        System.out.println("called getValue(int...numbers):");
        for(int num: numbers) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    //overloaded varargs method 2
    public static void getValue(String ...strings) {
        System.out.println("called getValue(string ... strings): ");
        for(String str: strings) {
            System.out.print(str + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        getValue();
        getValue(12,13,14);
        getValue("Nice", "to", "meet", "you");
    }
}
