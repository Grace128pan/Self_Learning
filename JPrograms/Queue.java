class Que1 {
    private char[] q;
    private int putloc, getloc; 

    //constructor to initialize the queue with a given size
    Que1(int size) {
        q = new char[size];
        putloc = getloc = 0;
    }

    //put a character into the queue
    void put(char ch) {
        if(putloc == q.length) {
            System.out.println("Queue is full.");
            return;
        }
        q[putloc++] = ch; //put character in the queue and update put index
    }
    
    //get a character from the queue
    char get() {
        if(getloc == putloc) {
            System.out.println("Queue is empty.");
            return (char) 0;
        }
        return q[getloc++]; //get character from the queue and update get index
    }
}

public class Queue {
    public static void main(String[] args) {
        
        Que1 q = new Que1(10);
        char ch;

        //put some characters into the queue
        System.out.println("Adding characters to the queue: ");
        for(int i = 0; i < 10; i++) {
            q.put((char)('A' + i));
            System.out.println("Added: " + (char)('A' + i));
        }

        //try to add another character to the full queue
        System.out.println("Try to add another character to the full queue: ");
        q.put('K');

        //get the characters from the queue
        System.out.println("\nRetrieving characters from the queue: ");
        for(int i = 0; i < 10; i++) {
            ch = q.get();
            if(ch != 0) {
                System.out.println("Got: " + ch);
            }
        }
        q.get();
    }
}
