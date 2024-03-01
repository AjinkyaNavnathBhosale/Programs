// Assign No. = 33 - 2. Write a Java program which accept N numbers from user and
// All such elements which are Divisible by 5.

import java.util.*;

class ArrayDemo
{
    public void Display(int Brr[])
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt] % 5) == 0)
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }
    }
}

class ProgramA162
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayDemo adobj = new ArrayDemo();
        adobj.Display(Arr);

        sobj.close();
    }
}