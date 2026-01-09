#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  AddN
//  Description:    Returns addition of N values.
//  Input:          Generic value, Integer
//  Output:         Generic value
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T AddN(T *arr, int iSize)
{
    T sum;
    int i=0;

    for (i=0, sum=0; i<iSize; i++)
    {
        sum = sum + arr[i];
    }
    
    return sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};
    int iSum = AddN(arr,5);
    cout << iSum << "\n";
    float fSum = AddN(brr,4);
    cout << fSum << "\n";
    
    return 0;
}