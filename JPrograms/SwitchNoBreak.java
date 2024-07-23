/*
switch without break
if a break statement does not end with a break, the case without a break will continue to execute the next case

several cases can share some common codes
switch(i) {
    case 1:
    case 2:
    case 3:
        System.out.println("i is 1, 2 or 3");
        break;
    case 4:
        System.out.println("i is 4");
        break;
}

nested switch statements
switch(ch1) {
    case 'A': System.out.println("This A is part of outer switch.");
    Switch(ch2) {
        case 'A': 
            System.out.println("This A is part of inner switch.");
            break;
        case 'B':
            System.out.println("This B is part of inner switch.");
            break;
        }
    }
    case 'B':

 */


 public class SwitchNoBreak {
    public static void main(String[] args) {
        for (int i=0; i<=5; i++) {
            switch(i) {
                case 0:
                    System.out.println("i is less than one");
                case 1:
                    System.out.println("i is less than two");
                case 2:
                    System.out.println("i is less than three");
                case 3:
                    System.out.println("i is less than four");
                case 4:
                    System.out.println("i is less than five");
            }
            System.out.println();
        }
    }
 }