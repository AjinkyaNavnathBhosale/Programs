// Assign No. = 32 - 3. Write a Java program which accept string from user and
// Difference between frequency of Small characters and frequency of capital characters.

import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
    {
        int iCnt = 0, iSum = 0;
        int iCount1 = 0, iCount2 = 0;
        
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount1++;
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount2++;
            }
            iSum = iCount1 - iCount2;
        }
        return iSum;
    }
}

class ProgramA158
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        String str = null;

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        
        iRet = sdobj.CountDiff(str);
        System.out.println("Number of Small characters are : "+iRet);
        
        sobj.close();
    }
}