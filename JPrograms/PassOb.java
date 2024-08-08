/*
 this program will demonstrate we can pass objects to methods
 The program defines a class called Block that stores the dimensions of a three-dimensional block
 */

//Objects can be passed to methods

class Block {
    int a, b, c;
    int volume;

    //constructor to initialize the block with given dimensions
    Block(int i, int j, int k) {
        a = i; 
        b = j;
        c = k;
        volume = a * b * c;
    }

    //Return true if dimensions of the block match
    boolean sameBlock(Block ob) {
        if((ob.a ==a ) & (ob.b == b) &(ob.c == c)) return true;
        else return false;
    }

    boolean sameVolume(Block ob) {
        if(ob.volume == volume) return true;
        else return false;
    }
}

public class PassOb {
    public static void main(String[] args) {
        Block ob1 = new Block(10, 2, 5);
        Block ob2 = new Block(10, 2, 5);
        Block ob3 = new Block(4, 5, 5);

        System.out.println("ob1 has the same dimensions as ob2: " + ob1.sameBlock(ob2));
        System.out.println("ob1 has the same dimensions as ob3: " + ob1.sameBlock(ob3));
        System.out.println("ob1 has the same volume as ob3: " + ob1.sameVolume(ob3));
    }
}

