// Assign. = 45 - 5. = Write generic program to accept N values and 
// reverse the contents.

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *crr, int iSize)
{  
    int temp =0;
    int i = 0, j = 0;
     
    for(i = 0, j = iSize - 1; i < iSize/2; i++, j--)
    {
        temp = crr[i];
        crr[i] = crr[j];
        crr[j] = temp;
        cout<<temp<<"\t";
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i];
    }

    Reverse(arr,9);

    float brr[] = {10.10f,9.9f,8.8f,7.7f,6.6f,5.5f,10.10f};

    for(int i = 0; i < 9; i++)
    {
        cout<<brr[i];
    }

    //Reverse(brr,7);

    return 0;
}
