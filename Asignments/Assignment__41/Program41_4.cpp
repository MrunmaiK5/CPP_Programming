#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Fact
//  Description:    Returns Factoraial of a number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           15/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int Fact(int iNo)
{
    static int iFact=1, iTemp=iNo;

    if(iNo == 0 || iNo == 1)
    {
        return iFact;
    }
    if(iTemp >= 1)
    {
        iFact=iFact*iTemp;
        iTemp--;
        Fact(iNo);
    }

    return iFact;
}

int main()
{
    int iValue=0, iRet=0;

    cout << "Enter a number: ";
    cin >> iValue;

    iRet = Fact(iValue);
    cout << iRet << "\n";

    return 0;
}