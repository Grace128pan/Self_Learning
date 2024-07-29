class showbits1 {
    int numbits;

    showbits1(int n) {
        numbits = n;
    }
    void show(long val) {
        var mask = 11;

        mask <<= numbits -1;

        int spacer = 0;
        for(; mask!=0; mask>>>=1) {
            if((val & mask) != 0) System.out.print("1 ");
            else System.out.print("0 ");

            spacer++;
            if((spacer%8) == 0) {
                System.out.print(" ");
                spacer = 0;
            }
        }
        System.out.println();
    }
}



public class ShowBits2 {
    public static void main(String[] args) {
        showbits1 b = new showbits1(8);
        showbits1 i = new showbits1(32);
        showbits1 li = new showbits1(64);

        System.out.println("123 in binary: ");
        b.show(123);

        System.out.println("\n87987 in binary: ");
        i.show(87987);

        System.out.println("\n237658768 in binary: ");
        li.show(237658768);
    }
}
