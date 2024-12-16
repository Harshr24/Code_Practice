import java.util.Scanner;

public class BankAcc {
    int ch;
    double bal = 0.0;

    public static void main(String args[]) {
        BankAcc obj = new BankAcc();
        Scanner inp = new Scanner(System.in); // Moved Scanner creation out of the try block
        while (true) {
            System.out.println("Enter the operation you wish to perform : ");
            System.out.println("1 : Deposit");
            System.out.println("2 : Withdrawal");
            System.out.println("3 : Check bank balance");
            System.out.println("4 : Exit");

            obj.ch = inp.nextInt();

            if (obj.ch == 1) {
                obj.Dep();
            } else if (obj.ch == 2) {
                obj.Wd();
            } else if (obj.ch == 3) {
                obj.Bbal();
            } else if (obj.ch == 4) {
                break;
            } else {
                System.out.println("Enter valid input !");
            }
        }
        inp.close(); // Close the Scanner when done using it
    }

    void Dep() {
        System.out.print("Enter the amount you want to Deposit : ");
        BankAcc obj = new BankAcc();
        Scanner inp = new Scanner(System.in);
        double amount = inp.nextDouble();
        obj.bal += amount;
        inp.close(); // Close the Scanner when done using it
    }

    void Wd() {
        System.out.print("Enter the amount you want to Withdraw : ");
        Scanner inp = new Scanner(System.in);
        BankAcc obj = new BankAcc();
        double amount = inp.nextDouble();
        if (amount <= bal) {
            obj.bal -= amount;
        } else {
            System.out.println("Insufficient balance for withdrawal.");
        }
        inp.close(); // Close the Scanner when done using it
    }

    void Bbal() {
        BankAcc obj = new BankAcc();
        System.out.println("Your Bank Balance is : " + obj.bal); // Fixed the print statement
    }
}
