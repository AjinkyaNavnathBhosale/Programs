// Assign. = 40 - 2. Write a Program which accept two number from user and
// Display position of common ON bits from that two numbers.

import java.util.*;

class Bits
{
    public int CommonBits(int ivalue1, int ivalue2)
    {
        int iDigit = 0, iPos = 0;
        while(ivalue1 != 0)
        {
            iDigit = ivalue1 % 2;
            System.out.println(iDigit);
            if(iDigit == 1)
            {
                iPos = iDigit;
            }
            ivalue1 = ivalue1 / 2;
        }
        return iPos;
    }
}

class ProgramA197
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0;
        int iDigit = 0;
        int iCnt = 0;

        System.out.println("Enter number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter number : ");
        iNo2 = sobj.nextInt();

        Bits bobj = new Bits();

        //iNo &= (iNo - 1);
        iCnt = bobj.CommonBits(iNo1, iNo2);
        System.out.println("Number of 1 bit are : "+iCnt);
    }
}