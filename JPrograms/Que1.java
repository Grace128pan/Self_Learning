public class Que1 {
    private char[] q;
    private int putloc, getloc; 

    //constructor to initialize the queue with a given size
    public Que1(int size) { // 注意：构造函数需要public
        q = new char[size];
        putloc = getloc = 0;
    }

    //put a character into the queue
    public void put(char ch) {
        if(putloc == q.length) {
            System.out.println("Queue is full.");
            return;
        }
        q[putloc++] = ch; //put character in the queue and update put index
    }
    
    //get a character from the queue
    public char get() {
        if(getloc == putloc) {
            System.out.println("Queue is empty.");
            return (char) 0;
        }
        return q[getloc++]; //get character from the queue and update get index
    }
}
