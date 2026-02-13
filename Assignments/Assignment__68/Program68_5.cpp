#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Displays a pattern of capital letters till given number by using recursive function.
//  Input:          Void
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           13/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : 5
    Output : a b c d e
*/

void Display(int iNo)
{
    static int i = 1;
    static char ch = 'a';

    if (i<=iNo)
    {
        printf("%c\t",ch);
        ch = ch + 1;
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