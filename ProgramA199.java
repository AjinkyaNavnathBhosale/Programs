// Assign. = 40 - 4. Write a Program which accept one number, two positions from user and
// Check whether bit at first or bit at second position is on or off. 

import java.util.*;

class ProgramA199
{
    public static boolean CheckBit(int iNo, int iPos1, int iPos2)
    {
        int iMask1 = 0x00000001;
        int iMask2 = 0x00000001;
        int iResult1 = 0, iResult2 = 0;

        iMask1 = iMask1 << (iPos1 -1);
        iMask2 = iMask2 << (iPos2 -1);

        iResult1 = iNo & iMask1;
        iResult2 = iNo & iMask2;
        
        if((iResult1 == iMask1) && (iResult2 == iMask2))
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
        int iNo = 0, iValue1 = 0, iValue2 = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();
        System.out.println("Enter the position number : ");
        iValue1 = sobj.nextInt();
        System.out.println("Enter the position number : ");
        iValue2 = sobj.nextInt();

       
        bRet = CheckBit(iNo, iValue1, iValue2);
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

