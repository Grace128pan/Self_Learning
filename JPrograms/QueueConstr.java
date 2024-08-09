/*
 In this project, we can enhance the Queue class by giving it two additional constructors
 The first will construct a new queue from another queue.
 The second will construct a queue, giving it initial values
 Adding these constructors enhances the usability of Queue substantially
 */

//a queue class for characters
class Queue3 {
    private char[] q; // this array holds the queue
    private int putloc, getloc; //the put and get indices

    //construct an empty queue given its size
    Queue3(int size) {
        q = new char[size]; //allocate memory for queue
        putloc = getloc = 0;
    }

    //construct a queue from a queue
    Queue3(Queue3 ob) {
        putloc = ob.putloc;
        getloc = ob.getloc;
        q = new char[ob.q.length];

        for(int i=getloc; i<putloc; i++)
            q[i] =ob.q[i];
    }

    //construct a queue with initial values
    Queue3(char[] a) {
        putloc = 0; 
        getloc = 0;
        q = new char[a.length];
        for(int i=0; i<a.length; i++) put(a[i]);
    }

    //put a character into the queue
    void put(char ch) {
        if(putloc == q.length) {
            System.out.println("-Queue is full.");
            return;
        }
        q[putloc++] = ch;
    }

    //get a character from the queue
    char get() {
        if(getloc == putloc) {
            System.out.println("-Queue is empty.");
            return (char) 0;
        }
        return q[getloc++];
    }
}

//demonstrate the queue class
public class QueueConstr {
    public static void main(String[] args) {
        //construct 10-element empty queue
        Queue3 q1 = new Queue3(10);

        char[] name = {'T', 'o', 'm'};
        //construct queue from array
        Queue3 q2 = new Queue3(name);

        char ch;
        int i;

        //put some characters into q1;
        for(i=0; i<10; i++)
            q1.put((char)('A' + i));
        
        //construct queue from another queue
        Queue3 q3 = new Queue3(q1);

        //show the queues
        System.out.print("Contents of q1: ");
        for(i=0; i<10; i++) {
            ch = q1.get();
            System.out.print(ch);
        }

        System.out.print("\n");

        System.out.print("Contents of q2: ");
        for(i=0; i<3; i++) {
            ch = q2.get();
            System.out.print(ch);
        }

        System.out.print("\n");

        System.out.print("Contents of q3: ");
        for(i=0; i<10; i++) {
            ch = q3.get();
            System.out.print(ch);
        }

    }
}
