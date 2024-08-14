class BankAccount {
    //private instance variable
    private double balance;

    //constructor to initialize balance 
    public BankAccount(double initialBalance) {
        //Ensure the initial balance is not negative
        if(initialBalance >= 0.0) {
            balance = initialBalance;
        } else {
            balance = 0.0;
            System.out.println("Initial balance can not negative. Setting balance to 0.0.");
        }
    }

    //public method to deposit money
    public void deposit(double amount) {
        if(amount > 0.0) {
            balance = balance + amount;

        } else {
            System.out.println("Deposit amount must be positive.");
        }
    }

    //public method to withdraw money
    public void withdraw(double amount) {
        if(amount >0.0 && amount <= balance) {
            balance = balance - amount;
        } else {
            System.out.println("Invalid withdrawal amount.");
        }
    }

    //public method to get the current balance
    public double getBalance() {
        return balance;
    }
}

public class PrivateBank {
    public static void main(String[] args) {
        //create a new bank account with an initial balance of 100$
        BankAccount account = new BankAccount(100);

        //deposit 50$
        account.deposit(50);
        System.out.println("Current balance after deposit: " + account.getBalance());

        //try to withdraw 30$
        account.withdraw(30);
        System.out.println("Current balance after withdrawal: " + account.getBalance());

        //try to withdraw 150$
        account.withdraw(150);
        System.out.println("Current balance after withdrawal: " + account.getBalance());

        //try to deposit a negative amount(should fail)
        account.deposit(-10);
        System.out.println("Current balance after deposit: " + account.getBalance());
        
    }
}
