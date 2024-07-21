/*
This program shows how help can be accessed from a class.
*/
/*
This program shows how help can be accessed from a class.
*/
package JPrograms;

class Help4 {
    void helpOn(int what) {
        switch (what) {
            case '1':
                System.out.println("The if:\n");
                System.out.println("if(condition) statement;");
                System.out.println("else statement;");
                break;
            case '2':
                System.out.println("The switch:\n");
                System.out.println("switch(expression) {");
                System.out.println("case constant:");
                System.out.println("statement sequence");
                System.out.println("break;");
                System.out.println("// ...");
                System.out.println("}");
                break;
            case '3':
                System.out.println("The for:\n");
                System.out.println("for(init; condition; iteration)");
                System.out.println("statement;");
                break;
            case '4':
                System.out.println("The while:\n");
                System.out.println("while(condition) statement;");
                break;
            case '5':
                System.out.println("The do-while:\n");
                System.out.println("do {");
                System.out.println("statement;");
                System.out.println("} while (condition);");
                break;
            case '6':
                System.out.println("The break:\n");
                System.out.println("break; or break label;");
                break;
            case '7':
                System.out.println("The continue:\n");
                System.out.println("continue; or continue label;");
                break;
        }
        System.out.println();
    }

    void showMenu() {
        System.out.println("Help on:");
        System.out.println(" 1. if");
        System.out.println(" 2. switch");
        System.out.println(" 3. for");
        System.out.println(" 4. while");
        System.out.println(" 5. do-while");
        System.out.println(" 6. break");
        System.out.println(" 7. continue\n");
        System.out.print("Choose one (q to quit): ");
    }

    boolean isValid(String input) {
        if (input.length() == 1) {
            char ch = input.charAt(0);
            return (ch >= '1' && ch <= '7') || ch == 'q';
        }
        return false;
    }
}

public class HelpClassDemo {
    public static void main(String[] args) throws java.io.IOException {
        String choice;
        Help4 hlpobj = new Help4();
        java.io.BufferedReader reader = new java.io.BufferedReader(new java.io.InputStreamReader(System.in));

        for (;;) {
            do {
                hlpobj.showMenu();
                choice = reader.readLine();
            } while (!hlpobj.isValid(choice));

            if (choice.equals("q")) break;

            System.out.println();

            hlpobj.helpOn(choice.charAt(0));
        }
    }
}

//the buffer reader way should be learnt in the future