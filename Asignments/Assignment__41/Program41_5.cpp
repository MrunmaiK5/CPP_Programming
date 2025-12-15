#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Mul
//  Description:    Returns product of digits of numbers.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           15/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int Mul(int iNo)
{
    static int iTemp=iNo;
    static int iMul=1, iDigit=1;

    if(iTemp>0)
    {
        iDigit = iTemp%10;
        iMul=iMul*iDigit;
        iTemp=iTemp/10;
        Mul(iNo);
    }

    return iMul;
}

int main()
{
    int iValue=0, iRet=0;

    cout << "Enter a number: ";
    cin >> iValue;

    iRet = Mul(iValue);
    cout << iRet << "\n";

    return 0;
}