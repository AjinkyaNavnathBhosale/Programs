// Assign. = 39 - 3. Write a Program which accept one number and position from user and
// ON that bit. Return modified number.

import java.util.*;

class ProgramA193
{
    public static int OnBit(int iNo, int iPos)
    {
        int iMask = 0x00000001;
        int iResult = 0;
        iMask = iMask << (iPos -1);

        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            return iNo;
        }
        else
        {
            return (iNo ^ iMask);
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

        iRet = OnBit(iNo, iPos);
    
        System.out.println("Modified number is : "+iRet);
    }
}
