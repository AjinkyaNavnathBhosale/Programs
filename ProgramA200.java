

import java.util.*;

class Bits
{
   public  void ToggleBitRange(int iNo, int iPos1, int iPos2)
    {
        int iMask1 = 0x00000001;
        int iMask2 = 0x00000001;
        
        int iResult1 = 0, iResult2 = 0, iCnt = 0;

        for(iCnt = iPos1; iCnt <= iPos2; iCnt++)
        {
            iMask1 = iMask1 << (iPos1 -1);
            iMask2 = iMask2 << (iPos2 -1);
        }
        
        iResult1 = iNo ^ iMask1;
        iResult2 = iNo ^ iMask2;
        System.out.println(iResult1);
        System.out.println(iResult2);
    }
}

class ProgramA200
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iValue1 = 0, iValue2 = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position : ");
        iValue1 = sobj.nextInt();
        System.out.println("Enter the position : ");
        iValue2 = sobj.nextInt();

        Bits bobj = new Bits();
        bobj.ToggleBitRange(iNo, iValue1, iValue2);
    
       // System.out.println("Updated number is : "+iRet);
    }
}