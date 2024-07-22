/*
 1. Garbage collection in Java is the process by which the Java Virtual Machine automatically removes objects that are
 no longer being used by a program.
 2. The example demonstrates how garbage collection works.
 3. Although you can not explicitly force garbage collection, you can suggest it by calling'System.gc()'.
 */
/* 
package JPrograms;

 public class GarbageCollection {

    // Object class with a finalize method to indicate when it is being collected
    static class MyObject {
        private int id;

        public MyObject(int id) {
            this.id = id;
        }

        @Override
        protected void finalize() throws Throwable {
            System.out.println("MyObject with id " + id + " is being garbage collected");
        }
    }

    public static void main(String[] args) {
        // Creating objects
        MyObject obj1 = new MyObject(1);
        MyObject obj2 = new MyObject(2);

        // Making obj1 eligible for garbage collection
        obj1 = null;

        // Suggesting the JVM to run the garbage collector
        System.gc();

        // Creating more objects
        MyObject obj3 = new MyObject(3);

        // Making obj2 eligible for garbage collection
        obj2 = null;

        // Suggesting the JVM to run the garbage collector again
        System.gc();

        // To keep the main thread alive long enough to see garbage collection
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

*/
