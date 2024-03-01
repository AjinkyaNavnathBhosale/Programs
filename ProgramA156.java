// Assign No. = 32 - 1. Write a Java program which accept string from user and
// Count number of capital characters.

import java.util.*;

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class ProgramA156
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        String str = null;

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        
        iRet = sdobj.CountCapital(str);
        System.out.println("Number of capital characters are : "+iRet);
        
        sobj.close();
    }
}