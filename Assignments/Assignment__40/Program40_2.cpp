#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Displays a number pattern till given number by using recursive function.
//  Input:          Void
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           15/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int iCnt=1;

    if(iCnt<=iNo)
    {
        cout << iCnt << "\t";
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iCnt=0;

    cout<<"Enter a number: \n";
    cin >> iCnt;
    Display(iCnt);
    return 0;
}