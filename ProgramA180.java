// Assign No. = 36 - 5. Accept string from user and 
// Check whether the string is pallindrome or not without considering its case.


import java.util.*;

class StringDemo
{
    public boolean StrPallindrome(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class ProgramA180
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();



        sobj.close();
    }
}