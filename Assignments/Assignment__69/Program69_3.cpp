#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Displays a number pattern till given number by using recursive function.
//  Input:          Void
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           13/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : 5
    Output : 5 4 3 2 1
*/

void Display(int iNo)
{
    if (iNo >= 1)
    {
        cout << iNo <<"\t";
        Display(iNo - 1);
    }
    else
    {
        cout << "\n";
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter a number : ";
    cin >> iValue;

    Display(iValue);

    return 0;
}