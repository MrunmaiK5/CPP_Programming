#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Multiply
//  Description:    Multiplies the given values.
//  Input:          Generic value, Generic value 
//  Output:         Generic value
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout << iRet << "\n";
    float fRet = Multiply(10.0f,20.0f);
    cout << fRet << "\n";
    
    return 0;
}