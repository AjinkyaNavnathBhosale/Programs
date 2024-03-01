// Assign. 11-2 = Write a program which accept number from user and 
// ckeck whether it contains 0 in it or not.
    
    #include<stdio.h>
    #include<stdbool.h>


    bool ChkZero(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;
        int iCnt = 0;
        
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit == 0)
            {
                iCnt++;
                return 1;
            }
            else
            {
                return 0;
            }
            iNo = iNo / 10;

        }
    }
    int main()
    {
        int iValue = 0;
        bool bRet = false;

        printf("Enter number : \n");
        scanf("%d",&iValue);

        bRet = ChkZero(iValue);

        if(bRet == true)
        {
            printf("It contains zero\n");
        }
        else
        {
            printf("There is no zero\n");
        }

        return 0;
    }