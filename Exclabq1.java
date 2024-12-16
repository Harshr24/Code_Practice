import java.util.*;

public class exclabQ1{
    public void check (int n) throws Exception {
        if (n%2!=0)
            throw new Exception("Number is odd");
        else
            System.out.println("Number is even");
    }

    public static void main(String[] args) 
    {
        try(Scanner input = new Scanner(System.in))
        {
            int n;
            System.out.println("Enter a number : ");
            n=input.nextInt();
            exclabQ1 obj = new exclabQ1();
            obj.check(n);
        }
        catch (Exception e) {
            System.out.println("Error: "+e);
        }
    }
}