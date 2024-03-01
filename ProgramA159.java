// Assign No. = 32 - 4. Write a Java program which accept string from user and
// Check whether it contains vowels in it or not.

import java.util.*;

class StringDemo
{
    public boolean ChkVowel(String str)
    {
        int iCnt = 0;
        boolean bFlags = false;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u'))
            {
                bFlags = true;
                break;
            }
            else
            {
                bFlags = false;
            }
        }
        return bFlags;
    }
}

class ProgramA159
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        String str = null;

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        
        bRet = sdobj.ChkVowel(str);
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
        