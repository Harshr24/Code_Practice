import java.util.Scanner;

class add {
    public static void main(String[] args) 
    { int cond;
        Scanner inp = new Scanner(System.in);
        do { 
            System.out.println("Enter the numbers you want to add : ");
            float a = inp.nextInt();
            float b = inp.nextInt();
            float c = a+b;                
	        System.out.println("Additon is : " + c);
            System.out.println("Enter 1 if you want to continue for another number, else for exit enter 0 : ");
            cond = inp.nextInt();
        } while (cond==1);
        inp.close();
    }
}