/*
 the program will demonstrate the method to set a value
 */



 class NewCounter {
    int count;

    //method with void return type to set the count
    void SetCount(int count) {
        this.count = count;
    }

    void DisplayCount() {
        System.out.println("Count: " + count);
    }
 }

 class Method2 {
    public static void main(String[] args) {
        NewCounter counter1 = new NewCounter();

        //call the setCount method
        counter1.SetCount(5);

        //call the displayCount method
        counter1.DisplayCount();
    }
 }