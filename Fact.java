import java.util.Scanner;

public class fact {
    public static void main(String[] args) 
    { int cond;
        do { 
            System.out.println("Enter the number you need the factorial !");
            try(Scanner inp = new Scanner(System.in)){
            int num = inp.nextInt();
            int fact = 1;

            if (num > 0) { 
                for (int i = 1; i <= num; i++) {
                    fact *= i;
                }
                System.out.println("Factorial of the number is : " + fact);
            } else if (num == 0) {
                System.out.println("0! == 1");
            } else {
                System.out.println("Factorial of negative number is invalid !");
            }

        System.out.println("Enter 1 if you want to continue for another number, else for exit enter 0 : ");
        cond = inp.nextInt();
        }} while (cond==1);
    }
}