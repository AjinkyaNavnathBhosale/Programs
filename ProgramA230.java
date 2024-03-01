// Assign. 46 = 5. Write a program which accept matrix from user and 
// Swap the contents of consecutive Rows.

import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void SwapRows()
    {
        int i = 0, j = 0, iSum = 0;
        int temp = Arr[0][0];


        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                temp = Arr[0][j];
                Arr[0][j] = Arr[1][j];
                Arr[1][j] = temp;
            }
        }
    }
}

class ProgramA230
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        Matrix mobj = new Matrix(iRow,iCol);
        
        mobj.Accept();
        mobj.Display();
        mobj.SwapRows();

        System.out.println("Updated matrix is : ");
        mobj.Display();
        
    }
}