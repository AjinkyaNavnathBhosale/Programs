// Assign No. = 36 - 4. Accept string from user and reverse the contents of that string.
// By toggling the case.


import java.util.*;

class StringDemo
{
    public void StrRevTogX(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        String str2 = null;

        for(iCnt = Arr.length-1; iCnt >= 0; iCnt--)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                str2 = str2 - 32;
            }
            else
            {
                str2 = str2 + 32;
            }
        }
    }
}


class ProgramA179
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();

        sdobj.StrRevTogX(str);
        
        sobj.close();
    }
}