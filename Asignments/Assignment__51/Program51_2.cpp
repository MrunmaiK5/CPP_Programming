#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Frequency
//  Description:    Returns frequency of any specific value given by user.
//  Input:          Generic value, Integer, Generic value
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int Frequency(T *arr, int iSize, T iNo)
{
    int iCnt = 0, iCount = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == iNo)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    cout << iRet << "\n";

    return 0;
}