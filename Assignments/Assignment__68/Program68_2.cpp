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
    Output : 1 2 3 4 5
*/

void Display(int iNo)
{
    static int i = 1;

    if (i<=iNo)
    {
        cout << i <<"\t";
        i++;
        Display(iNo);
    }
    else
    {
        cout << "\n";
    }
}

int main()
{
    Display(5);

    return 0;
}