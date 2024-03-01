// Assign. = 38 - 1. Write a Program which accept one number from user and
// Off 7th bit of that number if it is on. Return modified number.

import java.util.*;

class ProgramA186
{
    public static int OffBit(int iNo)
    {
        int iMask = 0x00000040;
        int iResult = 0;
        iResult = iNo & iMask;

        if(iResult == iMask)    // 4th bit is ON
        {
            return (iNo ^ iMask);
        }
        else                    // 4th bit is OFF
        {
            return iNo;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);
    
        System.out.println("Modified number is : "+iRet);
    }
}

