//define class x with a private field and public getter/setter methods

class X {
    private int count;

    //setter method to set the value of count
    public void setCount(int count) {
        this.count = count;
    }

    //getter method to get the value of count
    public int getCount() {
        return count;
    }
}
public class Y {
    public static void mian(String[] args) {
        X ob = new X();
        ob.setCount(10);
        System.out.println("Count is: " + ob.getCount());
    }
}
