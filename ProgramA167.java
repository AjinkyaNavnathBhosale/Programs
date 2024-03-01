// Assign No. = 34 - 2. Write a Java program which accept number from user and
// Retuen the count of odd digits.

import java.util.*;

class Digit
{
    public int CountOdd(int iValue)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            if((iDigit % 2) != 0)
            {
                iCnt++;
            }
            iValue = iValue / 10;
        }
        return iCnt;
    }
}

class ProgramA167
{
    public static void main(String Arg[])  throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iRet = 0;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();
        
        Digit dobj = new Digit();

        iRet = dobj.CountOdd(iNo);
        System.out.println("Count Odd digits :"+iRet);

    }
}



