#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Min
//  Description:    Returns smallest element from N values.
//  Input:          Generic value, Integer
//  Output:         Generic value
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Min(T *arr, int iSize)
{
    T min;
    int i=0;

    for (i=0, min=arr[0]; i<iSize; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    
    return min;
}

int main()
{
    int arr[] = {10,20,3,40,50};

    int iMin = 0;
    
    iMin = Min(arr,5);
    cout << iMin << "\n";
    
    return 0;
}