/*
 This program will implement a "fail-soft" array which prevents runtime errors
 */

 class FailSoftArray {
    private int[] a; //reference to array
    private int errval;  //value to return if get() fails
    public int length; // length is public

    //construct array given its size and the value to return if get() fails
    public FailSoftArray(int size, int errv) {
        a = new int[size];
        errval = errv;
        length = size;
    }
    //return value at given index
    public int get(int index) {
        if(indexOk(index)) return a[index];
        return errval;
    }

    //put a value at an index. Return false on failure
    public boolean put(int index, int val) {
        if(indexOk(index)) {
            a[index] = val;
            return true;
        }
        return false;
    }
    //return true if index is within bounds
    private boolean indexOk(int index) {
        if(index >= 0 & index < length) return true;
        return false;
    }
 }

 //demonstrate the fail-soft array
public class FailSoft {
    public static void main(String[] args) {
        FailSoftArray fs = new FailSoftArray(5, -1);
        int x;

        //show quiet failures
        System.out.println("Fail quietly.");
        for(int i=0; i<(fs.length*2); i++)
            fs.put(i, i*10);  //access to array must be trhrough its accessor methods
        
        for(int i=0; i<(fs.length*2);i++) {
            x = fs.get(i);
            if(x!= -1) System.out.print(x + " ");
        }
        System.out.println("");

        //now, handle failures
        System.out.println("\n fail with error reports.");
        for(int i=0; i<(fs.length*2); i++)
        if(!fs.put(i, i*10))
            System.out.println("Index " + i + " out-of-bounds");
        
        for(int i=0; i<(fs.length*2); i++) {
            x = fs.get(i);
            if(x!=-1) System.out.print(x + " ");
            else
                System.out.println("Index " + i + " out-of-bounds");
        }
    }
}
