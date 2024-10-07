public class objectExample {
    public static void main(String[] args) {
        Object obj1 = new String("Hello World! I can handle everything!");
        Object obj2 = 100;
        Object obj3 = new int[] {1, 2, 3, 4, 5};

        int[] arr = (int[]) obj3;  
        for(int i: arr) {
            System.out.println(i);
        }

        System.out.println(obj1);
        System.out.println(obj2);  // Autoboxing: int is automatically converted to Integer

    }
}

/*
objects defines the following methods, they are available in every object
object clone(): creates a new object that is a copy of the object on which clone() is called
boolean equals(Object obj): returns true if the object on which equals() is called is equal to the object passed as an argument
void finalize(): called before an unused object is recycled(deprecated)
class<?> getClass(): obtains the class of an object at run time
int hashCode(): return the hash code associated with the invoking object
void notify(): resumes execution of a thread waiting on the invoking object
void notifyAll(): resumes execution of all threads waiting on the invoking object
String toString(): returns a string that describes the object
void wait(): suspends execution of the invoking object
void wait(long milliseconds): suspends execution of the invoking object for the specified number of milliseconds
void wait(long milliseconds, int nanoseconds): suspends execution
 */