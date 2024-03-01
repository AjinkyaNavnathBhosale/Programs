// Assign. = 44 - 5. = Write generic program to accept N values from user and
// return Smallest values.

#include<iostream>
using namespace std;

template <class T> // Object Oriented Template variable. 
T Min(T crr[], int iSize)
{
    T iMin = crr[0];  // Array madhe sum variable 0 thvaycha.
    
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(crr[i] < iMin)
        {
            iMin = crr[i];
        }
    }
    return iMin;
}

int main()
{
    int value1 = 0, iCnt1 = 0, iRet = 0;
    int *ptr = NULL;
 
    cout<<"Enter number of elements : "<<"\n";
    cin>>value1;
 
    ptr = new int[value1];

    cout<<"Enter the Integer elements : "<<"\n";
    for(iCnt1 = 0; iCnt1 < value1; iCnt1++)
    {
        cin>>ptr[iCnt1];
    }

    iRet = Min(ptr,value1);
    printf("Smallest elements is (integer) : %d\n",iRet);


    int value2 = 0, iCnt2 = 0;
    float fRet = 0.0;
    float *arr = NULL;
 
    cout<<"Enter number of decimal elements : "<<"\n";
    cin>>value2;
 
    arr = new float[value2];

    cout<<"Enter the elements : "<<"\n";
    for(iCnt2 = 0; iCnt2 < value2; iCnt2++)
    {
        cin>>arr[iCnt2];
    }

    fRet = Min(arr,value2);
    printf("Smallest elements is (float) :%f\n",fRet);

    delete []ptr;
    delete []arr;


    return 0;
}
