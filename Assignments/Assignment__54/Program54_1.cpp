#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Search
//  Description:    Check whether given value is present in array or not.
//  Input:          Generic value, Integer
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool Search(T *arr, int iSize, T value)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == value)
        {
            return true;
        }   
    }

    return false;
}

int main()
{
    bool bRet = false;
    int arr[] = {10,20,90,40,50};

    bRet=Search(arr, 5, 90);
    
    if (bRet == true)
    {
        cout << "Element is present.\n";
    }
    else
    {
        cout << "Eleemnt is not present.\n";
    }

    return 0;
}