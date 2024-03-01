// Assign. 47 = 1. Write a program which accept matrix from user and 
// Display transpose of the matrix.

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

    public void Transpose()
    {
        int i = 0, j = 0, iSum = 0;
        //int temp = Arr[0][0];


        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[j][i];
                Arr[j][i] = temp;
            }
        }
    }
}

class ProgramA231
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
        mobj.Transpose();

        System.out.println("Updated matrix is : ");
        mobj.Display();
        
    }
}