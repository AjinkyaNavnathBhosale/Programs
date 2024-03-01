// Assign. = 39 - 1. Write a Program which accept one number from user and
// Position from user and check whether bit at that position is on or off. 
// If bit is on return TRUE otherwise return FALSE.

import java.util.*;

class ProgramA191
{
    public static boolean CheckBit(int iNo, int iPos)
    {
        int iMask = 0x00000001;
        int iResult = 0;

        iMask = iMask << (iPos -1);
        
        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position : ");
        iPos = sobj.nextInt();

        bRet = CheckBit(iNo, iPos);
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}

