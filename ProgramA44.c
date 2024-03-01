// Assign- 9.4 = Write a program which accept temperature in Fahrenheit and convert it into celsius.
// Consider value of PI as 3.14.(1 celsius =(Fahrenheit -32)*(5/9))

#include<stdio.h>


double FhtoCs(float fFahrenheit)
{
    auto double dAns = 0.0;
    dAns = ((fFahrenheit - 32) * (0.55555));
    return dAns;
}

int main()
{
    auto float fValue = 0.0f;
    auto double dRet = 0.0;

    printf("Enter Temperature in celsius\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%lf Fahreheit\n",dRet);

    return 0;

}
