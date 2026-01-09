#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Replace
//  Description:    Replace the old values of array with new values.
//  Input:          Generic value, Integer
//  Output:         Generic value
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Replace(T *arr, int iSize, T oldval, T newval)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == oldval)
        {
            arr[iCnt] = newval;
        }   
    }

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout << arr[iCnt] << "\t"; 
    }
    cout << "\n";

}

int main()
{
    int arr[] = {10,20,90,10,40,50,10};

    Replace(arr, 5, 10, 0);

    return 0;
}