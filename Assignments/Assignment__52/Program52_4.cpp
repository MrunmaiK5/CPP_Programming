#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Max
//  Description:    Returns largest element from N values.
//  Input:          Generic value, Integer
//  Output:         Generic value
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T *arr, int iSize)
{
    T max;
    int i=0;

    for (i=0, max=arr[0]; i<iSize; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    
    return max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.1, 3.7, 9.8, 8.7};
    int iMax = Max(arr,5);
    cout << iMax << "\n";
    float fMax = Max(brr,4);
    cout << fMax << "\n";
    
    return 0;
}