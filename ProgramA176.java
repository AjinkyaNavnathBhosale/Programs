// Assign No. = 36 - 1. Write a Java program which accept 2 strings from user and
// concat N characters of second string after string.value of N should be accepted from user.

import java.util.*;

class StringDemo 
{
    public void StrNCatX(String src, String dest, int iNo)
    {
        int iCnt = 0;
        char Arr1[] = src.toCharArray();
        char Arr2[] = dest.toCharArray();

        char Arr[] = Chars.concat(Arr1,Arr2);

        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            System.out.print(Arr2[iCnt]);
        }
        System.out.println();
    }
}

class ProgramA176
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
