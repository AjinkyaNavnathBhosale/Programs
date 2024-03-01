// Assign No. = 35 - 1. Write a Java program which accept N number from user and
// Accept one another number as NO, check whether NO is present or not.

import java.util.*;

class Number 
{
    public boolean Check(int []Brr, int iNo)
    {
        int iCnt = 0;
        boolean bFlag = true;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}

class ProgramA171
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();
        System.out.println("Enter the number that you want to search : ");
        iValue = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        Number nobj = new Number();

        bRet = nobj.Check(Arr,iValue);
        if(bRet == true)
        {
            System.out.println("TRUE"+bRet);
        }
        else
        {
            System.out.println("FALSE"+bRet);
        }

        sobj.close();
        

    }
}