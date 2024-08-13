/*
 In java, call by reference is not possible directly(although c++ supports it) through primitive data types or objects.
However, we can pass an object to a method, what is passed is a copy of the reference to that object, not the object itself.
this means that you cannot change the reference to point to a different object within the method, you can modify the object's internal state.
 */

class Data {
    int value;

    Data(int value) {
        this.value = value;
    }
}
public class CallByRefer2 {
    //method that modifies the object's state
    public static void modifyObject(Data obj) {
        obj.value = obj.value + 10;
        System.out.println("Inside modifyObject method: obj.value= " + obj.value);
    }

    public static void main(String[] args) {
        Data myData = new Data(15);
        System.out.println("Before calling modifyObject method: myData.value= " + myData.value);

        //passing the object to the method
        modifyObject(myData);

        //check the object's state after the method call
        System.out.println("After calling modifyObject method: myData.value= " + myData.value);
    }
}

/*
 In java, when you pass an object to a method, the method receives a copy of the reference to the object, not the object itself.
 Modifying the object's state within the method will reflect in the original object because both the original and the copy of the reference point to the same object in memory
 this is sometimes called call by reference in a conceptual sense, although technically Java always call by value for both primitive types and references.
 */