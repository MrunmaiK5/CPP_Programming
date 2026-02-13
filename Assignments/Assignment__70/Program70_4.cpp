#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :  Fact
//  Description     :  Returns factorial of given number using recursive function.
//  Input           :  Integer
//  Output          :  Integer
//  Author          :  Mrunmai Jitendra Khadpe
//  Date            :  13/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : 5
    Output : 120
*/

int Fact(int iNo)
{
    static int iFact = 1;
    static int i = 1;

    if (i <= iNo)
    {
        iFact = iFact * i;
        i++;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a number : ";
    cin >> iValue;

    iRet = Fact(iValue);
    cout << iRet <<"\n";

    return 0;
}