#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Displays a star pattern by using recursive function.
//  Input:          Void
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           15/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    static int iCnt=1;

    if(iCnt<=5)
    {
        cout << "*\t";
        iCnt++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}