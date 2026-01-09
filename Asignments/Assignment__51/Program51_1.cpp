#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Prints a value number of times given by user.
//  Input:          Generic value, Integer 
//  Output:         Nothing
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/01/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void Display(T value, int iSize)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout << value << "\t";
    }
    cout << "\n";
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}