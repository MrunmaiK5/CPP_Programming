#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  swap
//  Description:    Swaps two values.
//  Input:          Generic value, Generic value 
//  Output:         Nothing
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           10/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Swap(T &no1, T &no2)
{
    T temp=0;
    temp = no1;
    no1 = no2;
    no2 = temp;

    cout << no1 << " " << no2 << "\n";
}

int main()
{
    int a=10, b=20;
    Swap(a,b);
    float x = 3.5f, y=7.8f;
    Swap(x,y);
    
    return 0;
}