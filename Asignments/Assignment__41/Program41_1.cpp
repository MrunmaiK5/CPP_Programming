#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Displays a pattern with numbers in reverse order and stars by using recursive function.
//  Input:          Void
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           15/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int iCnt=iNo;

    if(iCnt>=1)
    {
        cout << iCnt << "\t*\t";
        iCnt--;
        Display(iNo);
    }
}

int main()
{
    int iValue=0;

    cout << "Enter a number: ";
    cin >> iValue;

    Display(iValue);
    return 0;
}