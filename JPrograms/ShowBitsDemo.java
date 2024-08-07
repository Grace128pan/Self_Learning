/*
 This program will demonstrate the bits within a byte

  11010011
| 10101010
  
 */

class ShowBits {
    int numbits;

    ShowBits(int n) {
        numbits = n;
    }

    void show(long val) {
        long mask = 1;

        //left-shift a 1 into the proper position
        mask <<= numbits -1;

        int spacer = 0;
        for(; mask!=0; mask>>>=1) {
            if((val&mask)!=0) System.out.print("1 ");
            else System.out.print("0 ");
            spacer++;
            if((spacer%8)==0) {
                System.out.print(" ");
                spacer = 0;
            }
        }
        System.out.println();
    }
}
//demonstrate showbits
class ShowBitsDemo {
    public static void main(String[] args) {
        ShowBits b = new ShowBits(8);
        ShowBits i = new ShowBits(32);
        ShowBits li = new ShowBits(64);

        System.out.println("123 in binary is: ");
        b.show(123);

        System.out.println("\n87987 in binary is: ");
        i.show(87987);

        System.out.println("\n237658768 in binary is: ");
        li.show(237658768);
    }
}