// Assign No. = 34 - 3. Write a Java program which accept number from user and
// Retuen the count of digits in between 3 and 7.

import java.util.*;

class Digit
{
    public int CountRange(int iValue)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            if((iDigit >= 3) && (iDigit <= 7))
            {
                iCnt++;
            }
            iValue = iValue / 10;
        }
        return iCnt;
    }
}

class ProgramA168
{
    public static void main(String Arg[])  throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iRet = 0;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();
        
        Digit dobj = new Digit();

        iRet = dobj.CountRange(iNo);
        System.out.println("Count digits between range :"+iRet);

    }
}



