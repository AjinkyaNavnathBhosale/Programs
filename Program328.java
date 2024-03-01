import java.util.*;
import java.io.*;

class Program328
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of packed file that you want to unpack : ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);  // 1st read Header of that file.
        FileInputStream fiobj = new FileInputStream(fobj);

        byte Header[] = new byte[100]; // Bytes Header.

        fiobj.read(Header,0,100);
        // Kashayt read, which index read Karychy, kiti Data vachychy.

        System.out.println(Header);
    }
}