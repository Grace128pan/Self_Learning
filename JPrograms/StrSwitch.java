/*
Using a stirng to control a switch statement

The following program demonstrates how to use a string to control a switch

Text block:
1.a text block is a new kind of string literal that is comprised of a sequence of characters that can occupy multiple lines
2.tab and double quote characters can also be entered directly, without using the escape sequence
3.a text block is supported by a delimiter
String str = """
    This is a text block,
    that spans multiple lines
    """;
 */

public class StrSwitch {
    public static void main(String[] args) {    
        String command = "cancel";

        switch(command) {
            case "connect":
                System.out.println("Connecting...");
                break;
            case "cancel":
                System.out.println("Canceling...");
                break;
            case "disconnect":
                System.out.println("Disconnecting...");
                break;
            default:
                System.out.println("Command Error!");
                break;
        }
    }
}
