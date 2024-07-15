/*
1.for(initialization; condition; iteration) statement;
2. count = count + 1; can be written as count++;
3. count = count - 1; can be written as count--;

 */
package JPrograms;

public class Forloop {
    public static void main(String[] args) {
        int count;
        for(count = 0; count < 5; count = count + 1) {
            System.out.println("This is count: " + count);
        }
        System.out.println("Done!");

    }
}