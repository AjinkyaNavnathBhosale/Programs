// Assign No. = 33 - 1. Write a Java program which accept N numbers from user and
// Return difference between summation of even elements and summation of odd elements.

import java.util.*;

class ArrayDemo
{
    public int Difference(int Brr[])
    {
        int iCnt = 0, iSum1 = 0, iSum2 = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt] % 2) == 0)
            {
                iSum1 = iSum1 + Brr[iCnt];
            }
            else
            {
                iSum2 = iSum2 + Brr[iCnt];
            }
        }
        iSum = iSum1 - iSum2;
        return iSum;
    }
}

class ProgramA161
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iRet = 0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayDemo adobj = new ArrayDemo();
        iRet = adobj.Difference(Arr);

        System.out.println("Addition of elements is : "+iRet);

        sobj.close();
    }
}