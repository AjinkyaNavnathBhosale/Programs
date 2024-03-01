// Assign- 9.2 = Write a program which accept width & height of rectangle from user and calculate its area.
// (Area = Width * Height)

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    auto double dAns = 0.0;
    dAns =  fWidth * fHeight;
    return dAns;
}

int main()
{
    auto float fValue1 = 0.0f, fValue2 = 0.0f;
    auto double dRet = 0.0;

    printf("Enter the Width\n");
    scanf("%f",&fValue1);

    printf("Enter the Height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle:%lf\n",dRet);

    return 0;

}