#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CopyArray
//  Description:    Copies one array's content in other array.
//  Input:          Generic value, Generic value, Integer
//  Output:         Nothing
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void CopyArray(T *src, T *dest, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        cout << dest[iCnt] << "\t";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int brr[] = {};

    CopyArray(arr, brr, 5);
    
    return 0;
}