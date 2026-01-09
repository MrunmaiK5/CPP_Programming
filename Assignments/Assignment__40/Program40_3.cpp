#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Displays a number pattern in reverse order till given number 
//                  by using recursive function.
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
        cout << iCnt << "\t";
        iCnt--;
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