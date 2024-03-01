// Assign No. = 36 - 3. Write a Java program which accept 2 strings from user and
// Check whether first N contents of two strings are equal or not.

import java.util.*;

class StringDemo 
{
    public void StrNCatX(String src, String dest, int iNo)
    {
       
    }
}

class ProgramA178
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;
        int iRet = 0;

        String str1 = null;
        String str2 = null;

        System.out.println("Enter the String 1 :");
        str1 = sobj.nextLine();

        System.out.println("Enter the String 2 :");
        str2 = sobj.nextLine();

        System.out.println("Enter the number : ");
        iSize  = sobj.nextInt();

        StringDemo sdobj = new StringDemo();

        sdobj.StrNCatX(str1, str2,iSize);
        //System.out.println("Product of Odd elements :"+iRet);
        

        sobj.close();
        

    }
}
