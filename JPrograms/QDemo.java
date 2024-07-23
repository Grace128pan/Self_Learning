/*
 1. a stack is a list in which elements can be accessed in first-in, last-out order(FILO) 
 Stack is like a stack of plates on a table
 2. A queue is a list in which elements can be accessed in first-in, first-out order
 a queue is like a line in a bank
 3.In general, queue supports two basic operations: put and get
 each put operation places a new element on the end of the queue. 
 each get operation retrieves the next element from the front of the queue
 queue operations are consumptive: once an element has been retrieved, it can not be retrieved again.
 The queue can also be full, if there is no space available to store an item
 it can be empty, if all of the items have been removed

 4. There are two basic types of queues: circular and noncircular
 circular queue:a circular queue reuses locations in the underlying array when elements are removed
 a noncircular queue does not reuse locations and eventually becomes exhausted

 The program demonstrates a noncircular queue

 class Queue {
 char[] g; // this array holds the queue
 int putloc, getloc; //the put and get indices
 }

 queue constructor
 Queue(int size) {
 g = new char[size]; // allocate memory for queue
putloc = getloc = 0;
 }

 put method
    void put(char ch) {
        if(putloc==g.length) {
            System.out.println(" - Queue is full.");
            return;
        }
        g[putloc++] = ch;
    }

get method
    char get() {
        if(getloc == putloc) {
            System.out.println(" - Queue is empty.");
            return (char) 0;
        }
        return g[getloc++];
    }
 */

 //The following program demonstrates the queue class for characters

 class Queue {
    char[] q; // this array holds the queue
    int putloc, getloc; // the put and get indices

    // Construct an empty queue given its size
    Queue(int size) {
        q = new char[size]; // allocate memory for queue
        putloc = getloc = 0;
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
 class QDemo {
    public static void main(String[] args) {
        Queue BigQ = new Queue(100);
        Queue SmallQ = new Queue(4);
        char ch;
        int i;

        System.out.println("Using BigQ to store the alphabet.");
        //put some memebers into BigQ
        for(i=0;i<26;i++)
            BigQ.put((char)('A'+i));
        
        //retrieve and display elements from BigQ
        System.out.print("Contents of BigQ: ");
        for(i=0;i<26;i++) {
            ch = BigQ.get();
            if(ch!=(char) 0) System.out.print(ch);
        }
        System.out.println("\n");

        System.out.println("Using SmallQ to generate errors.");
        //now, use SmallQ to generate some errors
        for(i=0;i<5;i++) {
            System.out.print("Attempting to store " + (char)('Z' - i));
            SmallQ.put((char)('Z' - i));
            System.out.println();
        }
        System.out.println();

        //more errors on SmallQ
        System.out.print("Contents of SmallQ: ");
        for(i=0;i<5;i++) {
            ch = SmallQ.get();
            if(ch!=(char) 0) System.out.print(ch);
        }    
    }
 }
