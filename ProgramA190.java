// Assign. = 38 - 5. Write a Program which accept one number from user and
// ON its first 4 bits. Return modified number.

import java.util.*;

class Bits
{
    public int OnBit(int iNo)
    {
        int iMask = 0x0000000f;
        int iResult = 0;

        iResult = iNo | iMask;
        
        return iResult;
    }
}

class ProgramA190
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        Bits bobj = new Bits();
        iRet = bobj.OnBit(iNo);
    
        System.out.println("Modified number is : "+iRet);
    }
}

