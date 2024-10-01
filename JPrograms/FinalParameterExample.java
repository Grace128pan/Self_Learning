public class FinalParameterExample {
    //the method takes a final parameter 'num' which means the value of 'num' cannot be changed within the method
    public void changeValue(final int num) {
        //uncommenting the below line will result in a compilation error because num is final and cannot be changed
        //num = num +1;

        //print the value of the final parameter
        System.out.println("The value of num is: " + num);
    }

    public static void main(String[] args) {
        //create an object of the class
        FinalParameterExample obj = new FinalParameterExample();

        //call the changeValue method and pass the value 10
        obj.changeValue(10);
    }
}
