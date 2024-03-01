// Assign No. = 35 - 3. Write a Java program which accept N number from user and
// Accept one another number as NO, return index of last occurrence of that NO.

import java.util.*;

class Number 
{
    public int LastOcc(int []Brr, int iNo) 
    {
        int iCnt = 0, iFlag = 0; 

        for(iCnt = 0; iCnt < Brr.length; iCnt++) 
        {
            if(Brr[iCnt] == iNo)
            {
                iFlag = iCnt;
            }
        }
        return iFlag;
    }
}

class ProgramA173
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

        iRet = nobj.LastOcc(Arr,iValue);
        System.out.println("Last Occurence :"+iRet);
        sobj.close();
    }
}
        

        
