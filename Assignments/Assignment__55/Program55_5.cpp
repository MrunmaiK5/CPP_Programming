#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Max
//  Description:    Swaps two values.
//  Input:          Generic value, Generic value 
//  Output:         Nothing
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T a, T b, T c, T d)
{
    if (a > b && a> c && a > d)
    {
        return a;
    }
    else if(b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > b && c > a && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    int iRet = 0;
    int a=10, b=20, c=23, d=1;
    iRet = Max(a,b,c,d);
    cout << iRet <<"\n";

    return 0;
}