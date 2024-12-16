//import java.io.*;
import java.util.Scanner;

public class circle {
    float r;
    double area,cir;
    public static void main (String args[])
    {
        System.out.println("Enter the radius : ");
        try(Scanner inp = new Scanner(System.in)){
            circle obj = new circle(); //class-name object-name =  new class-name();
            obj.r = inp.nextFloat();

            obj.area();
            obj.circumf();
        } 
    }

    void area(){
        System.out.print("The area of the circle is : ");
        area = r*r*Math.PI;
        System.out.println(area);
    }
    void circumf(){
        System.out.print("The Circumference of the circle is : ");
        cir = 2*r*Math.PI;
        System.out.println(cir);
    }
}
