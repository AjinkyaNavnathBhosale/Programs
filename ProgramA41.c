// Assign- 9.1 = Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14.(Area = PI * Radius * Radius)

#include<stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    auto double dAns = 0.0;
    dAns = PI * fRadius *fRadius;
    return dAns;
}

int main()
{
    auto float fValue = 0.0f;
    auto double dRet = 0.0;

    printf("Enter the redius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle:%lf\n",dRet);

    return 0;

}