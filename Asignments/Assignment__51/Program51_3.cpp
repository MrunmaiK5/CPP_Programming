#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  SearchFirst
//  Description:    Returns first occurence of any specific value given by user.
//  Input:          Generic value, Integer, Generic value 
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int iCnt = 0, index = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == iNo)
        {
            index = iCnt+1;
            return index;
        }   
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    
    if (iRet == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << iRet << "\n";
    }

    return 0;
}