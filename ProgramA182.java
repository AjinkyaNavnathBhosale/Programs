// Assign. = 37 - 2. Write a Program which checks whether 5th & 18th bit is On or Off.

import java.util.*;

class ProgramA182
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0,iResult = 0;
        int iMask = 0X00020010; 

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iResult = iNo & iMask;

        if(iResult == iMask) 
        {
            System.out.println("5th and 18th bit is ON");
        }
        else
        {
            System.out.println("Bits are Off");
        }
    }
}
