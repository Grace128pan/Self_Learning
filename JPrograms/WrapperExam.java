/*
we can use wrapper classes to pass a primitive type by reference(by using an object that holds the primitive value)
 */

 public class WrapperExam {
    
    // This method attempts to change an int value (which will not work)
    public static void modifyPrimitive(int num) {
        num += 10; // This modification is local and will not affect the original value
        System.out.println("Inside modifyPrimitive, num: " + num);
    }
    
    // This method still will not modify the value of the Integer object
    public static void modifyWrapper(Integer num) {
        num += 10; // This modification affects the original Integer object
        System.out.println("Inside modifyWrapper, num: " + num);
    }
    
    public static void main(String[] args) {
        int primitiveValue = 5;
        Integer wrapperValue = 5;
        
        System.out.println("Before modifyPrimitive, primitiveValue: " + primitiveValue);
        modifyPrimitive(primitiveValue); // Attempt to modify the primitive type
        System.out.println("After modifyPrimitive, primitiveValue: " + primitiveValue);
        
        System.out.println("\nBefore modifyWrapper, wrapperValue: " + wrapperValue);
        modifyWrapper(wrapperValue); // Modify the Integer object
        System.out.println("After modifyWrapper, wrapperValue: " + wrapperValue);
    }
}
