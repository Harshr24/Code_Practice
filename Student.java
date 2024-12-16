import java.util.*;

public class Student {
    String name;
    int rn;
    int age;
    public static void main (String args[]) // method static(method) returntype methodname
    {
        System.out.println("Enter name, roll no and age :");
        try(Scanner inp = new Scanner(System.in))
        { 
        Student obj = new Student(); 
        /* object creation (disp is my obejct here)
        class-name object-name =  new class-name();*/
      
        obj.name = inp.nextLine(); /*we cant make a static refrence to not staic method */
        obj.rn = inp.nextInt();    /*hence give objname.variable that we want to pass*/
        obj.age = inp.nextInt();

        /*Now call the method (as like user defined funtion)
        object-name.instance method-name() */
        obj.disp();
        }
    }

    /*we don't need to pass values as arguments since the Student class already has 
    these values stored as instance variables.*/
    void disp()//Instance method ... if it has !return type then add null
    {
        System.out.println("Name : " + name);
        System.out.println("Age : " + age);
        System.out.println("Roll no : " + rn);
    }
}
