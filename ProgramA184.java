// Assign. = 37 - 4. Write a Program which checks whether 7th & 8th & 9th bit is On or Off.

import java.util.*;

class ProgramA184
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iResult = 0;
        int iMask = 0X000001c0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iResult = iNo & iMask;

        if(iResult == iMask)  
        {
            System.out.println("7th and 8th and 9th bit is ON");
        }
        else
        {
            System.out.println("Bits are Off");
        }
    }
}
