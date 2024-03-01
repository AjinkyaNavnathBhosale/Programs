// Assign. = 39 - 5. Write a Program which accept one number from user and
// Toggle contents of first and last nibble of the number. Return modified number.

import java.util.*;

class Bits
{
    public int ToggleBit(int iNo)
    {
        int iMask = 0x00000009;
        int iResult = 0;

        iResult = iNo | iMask;
        
        return iResult;
    }
}

class ProgramA195
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        Bits bobj = new Bits();
        iRet = bobj.ToggleBit(iNo);
    
        System.out.println("Modified number is : "+iRet);
    }
}

