#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Div
//  Description:    Performs division on the given values.
//  Input:          Generic value, Generic value 
//  Output:         Generic value
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Div(T no1, T no2)
{
    T ans;
    ans = no1 / no2;
    return ans;
}

int main()
{
    int iRet = Div(50,20);
    cout << iRet << "\n";
    float fRet = Div(50.5f,20.3f);
    cout << fRet << "\n";
    
    return 0;
}