// Assign. = 45 - 4. = Write generic program to accept N values and 
// Search Last occurence of any specific value.

#include<iostream>
using namespace std;

template <class T>
T SearchLast(T *arr, int iSize,T No)
{  
    T Pos = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            Pos = iCnt;
        }
    }
    return Pos + 1;
    
}
    
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr,9,40);
    printf("%d\n",iRet);

    float brr[] = {10.10f,9.9f,8.8f,7.7f,6.6f,5.5f,10.10f};

    float fRet = SearchLast(brr,7,10.10f);
    cout<<fRet<<"\t";
    return 0;
}
