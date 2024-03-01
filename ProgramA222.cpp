// Assign. = 45 - 2. = Write generic program to accept N values and 
// Count frequency of any specific value.

#include<iostream>
using namespace std;

template <class T>
T Frequency(T *arr, int iSize,T No)
{  
    T  Count = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            Count++;
        }
    }
    return Count;
}
    
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = Frequency(arr,9,10);
    printf("%d\n",iRet);

    float brr[] = {10.10f,9.9f,8.8f,7.7f,6.6f,5.5f,10.10f};

    float fRet = Frequency(brr,7,10.10f);
    cout<<fRet<<"\t";
    return 0;
}
