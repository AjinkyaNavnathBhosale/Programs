// Assign No. = 35 - 5. Write a Java program which accept N number from user and
// Return product of all odd elements.

import java.util.*;

class Number 
{
    public int Product(int []Brr) 
    {
        int iCnt = 0, iPro = 1; 

        for(iCnt = 0; iCnt < Brr.length; iCnt++) 
        {
            if((Brr[iCnt] % 2) != 0)
            {
                iPro = iPro * Brr[iCnt];
            }
        }
        return iPro;
    }
}

class ProgramA175
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;
        int iRet = 0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();
       
        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        Number nobj = new Number();

        iRet = nobj.Product(Arr);
        System.out.println("Product of Odd elements :"+iRet);
        

        sobj.close();
        

    }
}
