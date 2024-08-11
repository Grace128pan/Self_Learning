/*
The following program uses ShowBits as local class.
 */

public class LocalClassDemo {
    public static void main(String[] args) {
        //an inner class version of ShowBits
        class ShowBits {
            int numbits;
            ShowBits(int n) {  // a local class nested within a method
                numbits = n;
            }
            void show(long val) {
                long mask = 1;
                //left-shift a 1 into the proper position
                mask <<= numbits -1;

                int spacer = 0;
                for(; mask!=0; mask >>>=1) {
                    if((val & mask) !=0) System.out.print("1");
                    else System.out.print("0");
                    spacer++;
                    if((spacer % 8) == 0) {
                        System.out.print(" ");
                        spacer = 0;
                    }
                }
                System.out.println();
            }
        }
        for(byte b=0; b<10; b++) {
            ShowBits bytval = new ShowBits(8);
            System.out.print(b + " in binary: ");
            bytval.show(b);
        }
    }
}

/*
an anonymous inner class: the inner class without a name, an object of an anonymous inner class is instantiated when the class is declared, using new
 */