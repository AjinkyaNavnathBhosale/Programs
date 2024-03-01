// Assign. = 37 - 5. Write a Program which checks whether first and last bit is On or Off.
// First bit means biy number 1 and last bit means bit number 32.
import java.util.*;

class ProgramA185
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iResult = 0;
        int iMask = 0X80000001;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iResult = iNo & iMask;

        if(iResult == iMask)  
        {
            System.out.println("1st and 32th bit is ON");
        }
        else
        {
            System.out.println("Bits are Off");
        }
    }
}
