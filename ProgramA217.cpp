// Assign. = 44 - 2. = Write generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

template <class T>
T Max(T iNo1,T iNo2,T iNo3)
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        return iNo1;  
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iRet = Max(11,21,51);
    cout<<"Int Max is : "<<iRet<<"\n";

    float fRet = Max(12.12f,22.22f,52.52f);
    cout<<"Float Max is : "<<fRet<<"\n";
    
    double dRet = Max(13.13,23.23,53.53);
    cout<<"Double Max is : "<<dRet<<"\n";  
    return 0;
}
