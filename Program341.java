import java.util.*;
import java.io.*;

class Program341
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();

        System.out.println("After trim : "+str);

        str = str.replaceAll("\\s+"," ");  // Replace 2 while space with 1 space.

        System.out.println("After replaceall : "+ str);
    }
}