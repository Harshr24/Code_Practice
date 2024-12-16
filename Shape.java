import java.util.Scanner;

public class shape {
    public static void main(String[] args) {
        try(Scanner input = new Scanner(System.in)){
        int choice;

        do {
            System.out.println("Choose a shape to calculate its area:");
            System.out.println("1. Triangle");
            System.out.println("2. Circle");
            System.out.println("3. Rectangle");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            choice = input.nextInt();

            switch (choice) {
                case 1:
                    tri triangle = new tri();
                    triangle.tria();
                    break;
                case 2:
                    cir circle = new cir();
                    circle.circ();
                    break;
                case 3:
                    rec rectangle = new rec();
                    rectangle.rect();
                    break;
                case 4:
                    System.out.println("Exiting the program.");
                    break;
                default:
                    System.out.println("Invalid choice. Please enter a valid option.");
            }
        } while (choice != 4);
    }
}
}

class tri extends shape {
    public void tria() { 
        System.out.println("Enter the sides of Triangle : ");
        try(Scanner input = new Scanner(System.in)){
        float a = input.nextFloat();
        float b = input.nextFloat();
        float c = input.nextFloat();
        
        float S = (a + b + c) / 2;
        // Finding the area of the triangle
        float A = (float)Math.sqrt(S * (S - a) * (S - b)* (S - c));
        float Pa = a + b + c;
        System.out.printf("Area of the Triangle is %f", A);
        System.out.printf("Perimetr of the Triangle is %f", Pa);
    }
}
}

class cir extends shape {
    public void circ() { 
        System.out.println("Enter the radius of the circle : ");
        try(Scanner input = new Scanner(System.in)){
        float r = input.nextFloat();
        
        System.out.print("The area of the circle is : ");
        double ac = r*r*Math.PI;
        System.out.println(ac);
        System.out.print("The Circumference of the circle is : ");
        float Pc = (float)Math.PI*2*r;
        System.out.println(Pc);
    }
}
}

class rec extends shape {
    public void rect() { 
        try(Scanner input = new Scanner(System.in)){

        System.out.print("Enter value of Length: ");
        float length = input.nextFloat();
        System.out.print("Enter value of Width: ");
        float width = input.nextFloat();

        float ar = length * width;
        float Pr = 2*(length + width);
        System.out.printf("Area of rectangle %f", ar);
        System.out.printf("Perimeter of rectangle %f", Pr);
    }
}
}