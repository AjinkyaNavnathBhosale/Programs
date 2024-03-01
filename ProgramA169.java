// Assign No. = 34 - 4. Write a Java program which accept number from user and
// Retuen multiplication of all digits.

import java.util.*;

class Digit
{
    public int Multiply(int iValue)
    {
        int iDigit = 0;
        int iCnt = 0, iMulti = 1;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iMulti = iMulti * iDigit;
            iValue = iValue / 10;
        }
        return iMulti;
    }
}

class ProgramA169
{
    public static void main(String Arg[])  throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iRet = 0;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();
        
        Digit dobj = new Digit();

        iRet = dobj.Multiply(iNo);
        System.out.println("Count digits between range :"+iRet);

    }
}



