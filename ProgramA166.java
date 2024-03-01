// Assign No. = 34 - 1. Write a Java program which accept number from user and
// Retuen the count of even digits.

import java.util.*;

class Digit
{
    public int CountEven(int iValue)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            if((iDigit % 2) == 0)
            {
                iCnt++;
            }
            iValue = iValue / 10;
        }
        return iCnt;
    }
}

class ProgramA166
{
    public static void main(String Arg[])  throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iRet = 0;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();
        
        Digit dobj = new Digit();

        iRet = dobj.CountEven(iNo);
        System.out.println("Count Even digits :"+iRet);

    }
}



