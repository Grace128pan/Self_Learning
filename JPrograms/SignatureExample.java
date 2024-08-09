class Signature {
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
}

public class SignatureExample {
    public static void main(String[] args) {
        Signature s = new Signature();

        System.out.println(s.add(2,3));
        System.out.println(s.add(2, 3, 5));
        System.out.println(s.add(2.5, 3.5));
    }
}
