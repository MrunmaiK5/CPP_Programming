#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  SearchLast
//  Description:    Returns last occurence of any specific value given by user.
//  Input:          Generic value, Integer, Generic value 
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int iCnt = 0, index = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == iNo)
        {
            index = iCnt+1;
        }   
    }
    return index;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    
    cout << iRet << "\n";

    return 0;
}