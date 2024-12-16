import java.util.*;

public class exclabQ2 {
    public static void main(String[] args) 
    {
        try(Scanner input = new Scanner(System.in))
        {
            int n;
            System.out.println("Enter array size : ");
            n=input.nextInt();
            int arr[] =new int[n];
            System.out.println("Enter array elements : ");
            for (int i=0 ;i<n ;i++){
                arr[i]=input.nextInt();
            }
            for (int i=0 ;i<n ;i++){
                if (arr[i]%2!=0)
                throw new Exception("Number is odd");
            else
                System.out.println("Number is even");
            }
        }
        catch (Exception e) {
            System.out.println("Error: "+e);
        }
    }
    
}
