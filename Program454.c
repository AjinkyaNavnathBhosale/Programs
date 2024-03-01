    #include<stdio.h>

    void DisplayDigitsR(int iNo)
    {
        int iDigit = 0;

        if(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            DisplayDigitsR(iNo);// Head recurssion
            printf("%d\n",iDigit); 
        }// Display at time of poping
    }

    int main()
    {
        int iValue = 0;

        printf("Enter the number : \n");
        scanf("%d",&iValue);

        DisplayDigitsR(iValue);
        return 0;
    }