
class mutableInteger {
    int value;

    mutableInteger(int value) {
        this.value = value;
    }

    void add(int x) {
        this.value += x;
    }
}


public class WrapperExample {
    public static void modifyMutableWrapper(mutableInteger num) {
        num.add(10);
        System.out.println("Inside modifyMutablewrapper, num: " + num.value);
    }
    public static void main(String[] args) {
       mutableInteger mutableValue = new mutableInteger(5);

       System.out.println("Before modifyMutableWrapper, mutableValue: " + mutableValue.value);
       modifyMutableWrapper(mutableValue);
       System.out.println("After modifyMutableWrapper, mutableValue: " + mutableValue.value);
    }
}
