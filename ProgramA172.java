// Assign No. = 35 - 2. Write a Java program which accept N number from user and
// Accept one another number as NO, return index of first occurrence of that NO.

import java.util.*;

class Number 
{
    public int FirstOcc(int []Brr, int iNo)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] == iNo)
            {
                break;
            }
        }
        if(Brr[iCnt] == iNo)
        {
            return iCnt;
        }
        else
        {
            return -1;
        }
    }
}

class ProgramA172
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iValue = 0;
        int iRet = 0;
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

        iRet = nobj.FirstOcc(Arr,iValue);
        System.out.println("First Occurence :"+iRet);

        sobj.close();
        

    }
}