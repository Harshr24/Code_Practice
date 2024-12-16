//import java.util.*;

public class str1 {
    //concat, char to string covertion, creating string using new... ChartoArray, (Compareto, Ignorecase, equals for string comparision) 
    public static void main(String[] args) {
        String str = "Java";
        char ch[] = {'i','s',' ','a'};
        String str2 = new String(ch);
        String str3 = new String("Language");
        System.out.println(str+" "+str2+" "+str3);

        char ch2 = str3.charAt(4);
        String str4 = ch2 + " r awesome !";
        System.out.println(str4);

        char ch3[]=new char[10];
        str4.getChars(7,11,ch3,0); //it won't include srcEnd value lol 
        System.out.print("Whole");
        System.out.println(ch3);
    }
}