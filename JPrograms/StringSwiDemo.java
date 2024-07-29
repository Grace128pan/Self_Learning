/*
String can control a switch statement in Java. This allows for more readable and concise code when comparing strings against a set of predefined values

 */

 class StringSwiDemo {
    public static void main(String[] args) {
        String today = "Monday";

        switch(today) {
            case "Monday":
                System.out.println("Today is Monday, but it is my rest day.");
                break;
            case "Tuesday":
                System.out.println("Today is Tuesday, also my rest day.");
                break;
            case "Wednesday":
                System.out.println("Today is Wednesday, and I will have many courses.");
                break;
            case "Thursday":
                System.out.println("Today is Thursday, and the second working day for me.");
                break;
            case "Friday":
                System.out.println("Today is Friday, and the third working day for me.");
                break;
            case "Saturday":
                System.out.println("Today is Saturday, and the fourth working day for me.");
                break;
            case "Sunday":
                System.out.println("Today is Sunday, and the fifth working day for me, after which I can have two-day off. Thank goodness!");
                break;
            default:
                System.out.println("Invalid day of the week.");
                break;
        }

    }
 }