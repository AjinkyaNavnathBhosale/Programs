// Assign no.9-5 = Write a program which accept area in square feet and convert it into square.
//(1 Square feet = 0.0929 Square meter)

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dSum = 0.0;
    dSum = ((float)iNo * 0.0929);
    return dSum;
}

int main()
{
    auto int iValue = 0;
    auto double dRet = 0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%lf Square Meter",dRet);

    return 0;
}