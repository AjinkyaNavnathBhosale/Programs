// Assign. = 38 - 4. Write a Program which accept one number from user and
// Toggle 7th and 10th bit of that number. Return modified number.

import java.util.*;

class ProgramA189
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0x00000240;
        int iResult = 0;

        iResult = iNo ^ iMask;

        return iResult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo);
    
        System.out.println("Modified number is : "+iRet);
    }
}

