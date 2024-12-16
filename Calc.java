import java.util.Scanner;

public class calc {
    public static void main(String args[]) {
        try (Scanner inp = new Scanner(System.in)) {
            int ch;

            do {
                System.out.println("Select the operation to be performed : \n 1. Sum \n" + //
                        " 2. Subtraction \n" + //
                        " 3. Product \n" + //
                        " 4. Division \n" + //
                        " 5. Exit");
                System.out.print("Enter your choice : ");
                ch = inp.nextInt();
                System.out.println("Enter elements you need :");
                int n = inp.nextInt();
                int x[] = new int[n];

                System.out.println("Enter elements as per operation :");
                for (int i = 0; i < x.length; i++) {
                    x[i] = inp.nextInt();
                }
                float ans = 0;

                switch (ch) {
                    case 1:
                        for (int i = 0; i < x.length; i++) {
                            ans = ans + x[i];
                        }
                        break;

                    case 2:
                        for (int i = 0; i < x.length; i++) {
                            ans = ans - x[i];
                        }
                        break;

                    case 3:
                        for (int i = 0; i < x.length; i++) {
                            ans = ans * x[i];
                        }
                        break;

                    case 4:
                        for (int i = 0; i < x.length; i++) {
                            if (x[i] != 0) {
                                ans = ans / x[i];
                            } else {
                                System.out.println("Invalid operation");
                            }
                        }
                        break;

                    case 5:
                        System.out.println("Exiting the program.");
                        break;

                    default:
                        System.out.println("Invalid. Please enter a valid option.");
                }
            } while (ch != 4);
        }
    }
}
