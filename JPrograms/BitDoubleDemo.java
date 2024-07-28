/*
 in Java, bitewise operators can not be directly applied to double types
 bitwise operators are deigned to work with integer types such as byte, short, int, long and char
 */
public class BitDoubleDemo {
    public static void main(String[] args) {
        double d1 = 5.75;
        double d2 = 2.5;

        // Convert double to long bits representation
        long l1 = Double.doubleToLongBits(d1);
        long l2 = Double.doubleToLongBits(d2);

        // Perform bitwise AND operation
        long andResult = l1 & l2;

        // Perform bitwise OR operation
        long orResult = l1 | l2;

        // Perform bitwise XOR operation
        long xorResult = l1 ^ l2;

        // Convert the result back to double
        double andDouble = Double.longBitsToDouble(andResult);
        double orDouble = Double.longBitsToDouble(orResult);
        double xorDouble = Double.longBitsToDouble(xorResult);

        // Print the results
        System.out.println("Original doubles: " + d1 + ", " + d2);
        System.out.println("AND result: " + andDouble);
        System.out.println("OR result: " + orDouble);
        System.out.println("XOR result: " + xorDouble);
    }
}

