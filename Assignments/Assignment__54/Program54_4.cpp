#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Reverse
//  Description:    Reverses an array.
//  Input:          Generic value, Integer
//  Output:         Nothing
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        cout << arr[iCnt] << "\t";
    }
    cout << "\n";
}

int main()
{
    int iRet = 0;
    int arr[] = {10,20,90,40,50};

    Reverse(arr, 5);

    return 0;
}