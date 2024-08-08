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
