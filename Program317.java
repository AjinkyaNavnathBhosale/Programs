import java.util.*;
import java.io.*;

class Program317
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of Directory : ");
        String DirectoryName = sobj.nextLine();

        boolean bret = false;

        bret = fobj.isDirectory();  // Inbuild Function.
        if(bret == true)
        {
            System.out.println("Directory is present");
        }
        else 
        {
            System.out.println("There is no such directory");
        }
    }
}
