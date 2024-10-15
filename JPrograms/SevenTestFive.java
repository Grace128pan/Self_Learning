//Java program with real-world context

//class Alpha(Grandparent)

class Alpha1 {
    String name;
    int age;

    //constructor of a superclass Alpha
    Alpha1(String name, int age) {
        this.name = name;
        this.age = age;
        System.out.println("Grandparent's constructor is called.");
    }

    //method to display Alpha's details
    void displayInfo12() {
        System.out.println("Grandparent: " + name + ", age: " + age);
    }
}

//class Beta(Parent) extends Alpha(Grandparent)
class Beta1 extends Alpha1 {
    String occupation;

    //constructor of Beta
    Beta1(String name, int age, String occupation) {
        //calling Alpha's constructor using super()
        super(name, age);
        this.occupation = occupation; //initializing Beta's occupation
        System.out.println("parent's constructor is called.");
    }

    //method to display Beta's details
    
    void displayInfo12() {
        super.displayInfo12(); //calling Alpha's displayInfo method
        System.out.println("occupation: " + occupation);
    }
}

//class Gamma(child) extends Beta(parent)
class Gamma1 extends Beta1 {
    String hobby;

    //constructor of Gamma
    Gamma1(String name, int age, String occupation, String hobby) {
        //calling Beta's constructor using super()
        super(name, age, occupation);
        this.hobby = hobby; 
        System.out.println("Child's constructor is called.");
    }

    //method to display Gamma's details
    
    void displayInfo12() {
        super.displayInfo12(); //calling Beta's displayInfo method
        System.out.println("hobby: " + hobby);
    }
}
public class SevenTestFive {
    public static void main(String[] args) {
        Gamma1 g = new Gamma1("John", 35, "Engineer", "Reading");

        //Display the family details
        System.out.println("\ndisplaying family hierarchy: ");
        g.displayInfo12(); //calling Gamma's displayInfo method
    }
}
