// Assign. = 45 - 1. = Write generic program to accept one value and one number from user.
// Print that value that number of times on screen.

#include<iostream>
using namespace std;

template <class T>
void Display(T iNo,int ifrequency)
{  
    int iCnt = 0;

    if(ifrequency < 0)     // Updator
    {
        ifrequency = -ifrequency;
    }
    
    for(iCnt = 1; iCnt <= ifrequency; iCnt++)
    {
        cout<<iNo<<"\t";
    }
    cout<<"\n";
    
}

int main()
{
    char cValue = '\0';
    int iValue = 0, iNo = 0;
    float fValue = 0.0f;

    printf("Enter the value : \n");
    scanf("%c",&cValue);
    printf("Enter the number : \n");
    scanf("%d",&iNo);
    Display(cValue,iNo);

    printf("Enter the value : \n");
    scanf("%d",&iValue);
    printf("Enter the number : \n");
    scanf("%d",&iNo);
    Display(iValue,iNo);
    
    printf("Enter the value : \n");
    scanf("%f",&fValue);
    printf("Enter the number : \n");
    scanf("%d",&iNo);
    Display(fValue,iNo);


    return 0;
}
