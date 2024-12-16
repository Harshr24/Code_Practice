import java.util.Scanner;

class temp {
    public static void main(String[] args) {
        try(Scanner inp = new Scanner(System.in)){

        while (1>0) 
        {
            System.out.println("Choose an option:");
            System.out.println("1. Convert cel to fahrn");
            System.out.println("2. Convert fahrn to cel");
            System.out.println("3. Quit");

            int choice = inp.nextInt();

            if (choice == 1) {
                System.out.print("Enter temperature in Celsius: ");
                float cel = inp.nextFloat();
                float fahrn = (cel * 9 / 5) + 32;
                System.out.println("Equivalent temperature in fahrn: " + fahrn);
            } 
            else if (choice == 2) {
                System.out.print("Enter temperature in fahrn: ");
                float fahrn = inp.nextFloat();
                float cel = (fahrn - 32) * 5 / 9;
                System.out.println("Equivalent temperature in cel: " + cel);
            } 
            else if (choice == 3) {
                System.out.println("Exit!");
                break;
            } 
            else {
                System.out.println("Invalid choice. Please select 1, 2, or 3.");
            }
        }}
    }
}