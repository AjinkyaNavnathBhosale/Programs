// Assign No. = 35 - 4. Write a Java program which accept N number from user and
// Accept range, Display all element from that range.

import java.util.*;

class Number 
{
    public void Display(int []Brr, int iStart, int iEnd) 
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++) 
        {
            if((Brr[iCnt] >= iStart) && (Brr[iCnt] <= iEnd))
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }
    }
}

class ProgramA174
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iValue = 0;
        int iRet = 0, iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        System.out.println("Enter the Range from : ");
        iValue1  = sobj.nextInt();
        
        System.out.println("Enter the Range to : ");
        iValue2  = sobj.nextInt();
        
        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        Number nobj = new Number();

        nobj.Display(Arr,iValue1, iValue2);
        
        sobj.close();
    }
}
        
