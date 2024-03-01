// Assign No. = 34 - 5. Write a Java program which accept number from user and
// Return difference between summation of even digits and summation of odd digits.

import java.util.*;

class Digit
{
    public int CountDiff(int iValue)
    {
        int iDigit = 0, iSum1 = 0, iSum2 = 0;
        int iSum = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            if((iDigit % 2) == 0)
            {
                iSum1 = iSum1 + iDigit;
            }
            else
            {
                iSum2 = iSum2 + iDigit;
            }
            iValue = iValue / 10;
        }
        iSum = iSum1 - iSum2;
        return iSum;
    }
}

class ProgramA170
{
    public static void main(String Arg[])  throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iRet = 0;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();
        
        Digit dobj = new Digit();

        iRet = dobj.CountDiff(iNo);
        System.out.println("Count digits between range :"+iRet);

    }
}



