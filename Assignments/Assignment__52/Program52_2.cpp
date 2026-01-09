#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Max
//  Description:    Finds largest number from three numbers.
//  Input:          Generic value, Generic value, Generic value
//  Output:         Generic value
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T no1, T no2, T no3)
{
    T max;
    
    if (no1 > no2 && no1 > no3)
    {
        max = no1;
    }
    else if (no2 > no1 && no2 > no3)
    {
        max = no2;
    }
    else
    {
        max = no3;
    }
    
    return max;
}

int main()
{
    int iRet = Max(10,20,5);
    cout << iRet << "\n";
    float fRet = Max(10.0f,20.0f,15.4f);
    cout << fRet << "\n";
    
    return 0;
}