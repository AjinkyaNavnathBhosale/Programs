// Assign. = 39 - 2. Write a Program which accept one number and position from user and
// Off that bit. Return modified number.

import java.util.*;

class ProgramA192
{
    public static int OffBit(int iNo, int iPos)
    {
        int iMask = 0x00000001;
        int iResult = 0;
        iMask = iMask << (iPos -1);

        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
            return iNo;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position : ");
        iPos = sobj.nextInt();

        iRet = OffBit(iNo, iPos);
    
        System.out.println("Modified number is : "+iRet);
    }
}
