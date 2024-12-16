import java.util.Scanner;

public class area {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter value of Length: ");
        float length = input.nextFloat();
        System.out.print("Enter value of Width: ");
        float width = input.nextFloat();

        float area = length * width;
        System.out.printf("Area of length %f and width %f is %f", length, width, area);

        input.close();
    }
}
