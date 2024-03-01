// Assign No. = 32 - 2. Write a Java program which accept string from user and
// Count number of Small characters.

import java.util.*;

class StringDemo
{
    public int CountSmall(String str)
    {
        int iCnt = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class ProgramA157
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        String str = null;

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        
        iRet = sdobj.CountSmall(str);
        System.out.println("Number of Small characters are : "+iRet);
        
        sobj.close();
    }
}