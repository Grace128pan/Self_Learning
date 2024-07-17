/*
1. the traditional switch works like this:
the value of an expression is successively tested against a list of constants. When a match is found, the statement sequence associated with that match is executed
switch (expression) {
    case constant1:
        statement sequence
        break;
    case constant2:
        statement sequence
        break;
    case constant3:
        statement sequence
        break;
    default:
        statement sequence;
}
 */

 package JPrograms;

 public class Switch {
    public static void main(String[] args) {
        for(int i=0; i<10; i++) {
            switch(i) {
                case 0:
                    System.out.println("i is zero");
                    break;
                case 1:
                    System.out.println("i is one");
                    break;
                case 2:
                    System.out.println("i is two");
                    break;
                case 3:
                    System.out.println("i is three");
                    break;
                case 4:
                    System.out.println("i is four");
                    break;
                default:
                    System.out.println("i is five or more");
            }
        }
    }
 }

