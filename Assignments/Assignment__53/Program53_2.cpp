#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CheckSorted
//  Description:    Check whether given array is sorted or not.
//  Input:          Generic value, Integer
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool CheckSorted(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] > arr[iCnt+1])
        {
            return false;
        }   
    }

    return true;
}

int main()
{
    bool bRet = false;
    int arr[] = {10,20,90,40,50};

    bRet=CheckSorted(arr, 5);
    
    if (bRet == true)
    {
        cout << "Array is sorted.\n";
    }
    else
    {
        cout << "Array is unsorted.\n";
    }

    return 0;
}