// Assign. = 37 - 3. Write a Program which checks whether 7th & 15th & 21th,28th bit is On or Off.

import java.util.*;

class ProgramA183
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iResult = 0;
        int iMask = 0X08104040;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iResult = iNo & iMask;

        if(iResult == iMask)  
        {
            System.out.println("7th and 15th and 21st,28th bit is ON");
        }
        else
        {
            System.out.println("Bits are Off");
        }
    }
}
