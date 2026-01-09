#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Add
//  Description:    Adds the given values.
//  Input:          Generic value, Generic value 
//  Output:         Generic value
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Add(T no1, T no2)
{
    T ans;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int iRet = Add(10,20);
    cout << iRet << "\n";
    float fRet = Add(10.5f,20.3f);
    cout << fRet << "\n";
    
    return 0;
}