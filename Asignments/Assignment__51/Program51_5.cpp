#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Reverse
//  Description:    Reverses the given array.
//  Input:          Generic value, Integer 
//  Output:         Nothing
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;
    for (iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        cout << arr[iCnt] << "\t";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    Reverse(arr,9);
    
    return 0;
}