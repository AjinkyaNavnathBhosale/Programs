// Assign No. = 32 - 5. Write a Java program which accept string from user and
// Display it in reverse order.

import java.util.*;

class StringDemo
{
    public void Reverse(String str)
    {
        int iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = Arr.length-1; iCnt >= 0; iCnt--)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class ProgramA160
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        String str = null;

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        
        sdobj.Reverse(str);

        sobj.close();
    }
}
        