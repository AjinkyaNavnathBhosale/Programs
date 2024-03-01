// Assign. = 37 - 1. Write a Program which checkswhether 15th bit is On or Off.

import java.util.*;

class ProgramA181
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0,iResult = 0;
        int iMask = 0X00004000;
        
        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iResult = iNo & iMask;
    
        if(iResult == iMask)
        {
            System.out.println("15th bit is ON");
        }
        else
        {
            System.out.println("15th bit is OFF");
        }    


    }
}
