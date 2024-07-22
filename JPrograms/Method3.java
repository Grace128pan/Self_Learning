/*
 the program demonstrates a method to perform an action
 */

 package JPrograms;

 class Light {
    boolean isOn;

    void turnOn() {
        isOn = true;
        System.out.println("Light is turned on.");
    }

    void turnOff() {
        isOn = false;
        System.out.println("Light is turned off.");
    }
 }

 class Method3 {
    public static void main(String[] args) {
        //create an instance of the Light class
        Light L1 = new Light();

        //turn on the light
        L1.turnOn();

        //turn off the light
        L1.turnOff();
    }
 }