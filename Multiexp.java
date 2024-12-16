public class Multiexp {
    //private static final int MAX = 10; // Maximum number of elements in the array
    public static void main (String args[])
    {
        try {
            int a[]=new int[5];
            a[8] = 30/10;
        }
        catch(ArithmeticException e)
        {
            System.out.println("Arth Exp !");
        }
        catch(IndexOutOfBoundsException e)
        {
            System.out.println("IOBE Exp !");
        }
        System.out.println("Rest code");
    }
}