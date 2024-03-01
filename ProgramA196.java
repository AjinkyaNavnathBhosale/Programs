// Assign. = 40 - 1. Write a Program which accept one number from user and
// Count number of ON (1) bits in it without using % and / operator.

import java.util.*;

class ProgramA196
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iDigit = 0;
        int iCnt = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {
            iNo &= (iNo - 1);
            iCnt++;
        }
        System.out.println("Number of 1 bit are : "+iCnt);
    }
}