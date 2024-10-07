/*
In java, the methods getClass(), notify(), notifyAll(), and wait() are declared as final, we can override the other methods
equals(): compares two objects and toString(): returns a string representation of an object

1.Does a superclass have access to the members of a subclass? does a subclass have access to the members of a superclass?
    A superclass does not have access to the members of a subclass, but a subclass has access to the members of a superclass
2.The following example shows 
superclass: Animal
has the method sound() and a name field
subclass: Dog
inherits sound() from animal and it has an additional method bark() and an age field
the subclass can access members from animal(its superclass)

protected members are accessible within the same package
protected members are accessible in subclasses, even if they aee in different packages
if you are accessing a protected member from a subclass in a different package, you can only do so through inheritance
 */

 //superclass
 class Animal {
    //protected member(accessible in subclasses)
    protected String name;

    public Animal(String name) {
        this.name = name; //initialize the name field
    }

    //public method(accessible in subclasses)
    public void sound() {
        System.out.println(name + " makes a sound.");
    }

    //private method(not accessible in subclasses)
    /* 
    private void sleep() {
        System.out.println(name + " is sleeping.");
    }
     */
    //accessing subclass members from superclass(which won't work)
    public void testSubclass() {
        //System.out.println("Age: " + age); //Error: age belongs to Dog, not Animal
    }
 }

 //subclass
 class Dog extends Animal {
    public int age;
    public Dog(String name, int age) {
        super(name); //call superclass constructor
        this.age = age; //initialize the age field
    }

    //method specific to the subclass
    public void bark() {
        System.out.println(name + " is barking.");
    }

    //subclass accessing superclass members
    public void testSuperclass() {
        //accessing name from the superclass
        System.out.println("Name: " + name);
        //calling method from superclass
        sound();
    }
 }

 public class AnimalExample {
    public static void main(String[] args) {
        //creating an object of the subclass Dog
        Dog dog = new Dog("Buddy", 3);

        //subclass accessing its own members
        System.out.println("Age: " + dog.age);
        dog.bark();
    

    //subclass accessing superclass members
    dog.testSuperclass(); //access name and sound() from Animal

    //superclass trying to access subclass members(this won't work)
    Animal animal = new Animal("Generic Animal");
    animal.testSubclass(); //Error: age belongs to Dog, not Animal
    }
 }