#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  SumOdd
//  Description:    Return summation of odd elements in array.
//  Input:          Generic value, Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T SumOdd(T *arr, int iSize)
{
    int iCnt = 0;
    T sum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt]%2 != 0)
        {
            sum = sum + arr[iCnt];
        }   
    }

    return sum;
}

int main()
{
    int iRet = 0;
    int arr[] = {10,20,90,40,50};

    iRet=SumOdd(arr, 5);
    
    cout << iRet << "\n";

    return 0;
}