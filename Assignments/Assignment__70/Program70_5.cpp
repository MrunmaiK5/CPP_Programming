#include<iostream>
#include<stdio.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :  Mul
//  Description     :  Returns Multiplication of digits of given number using recursive function.
//  Input           :  Integer
//  Output          :  Integer
//  Author          :  Mrunmai Jitendra Khadpe
//  Date            :  13/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : 523
    Output : 30
*/

int Mul(int iNo)
{
    static int iMul = 1;
    static int iDigit = 1;

    if (iNo >= 1)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        Mul(iNo/10);
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a number : ";
    cin >> iValue;

    iRet = Mul(iValue);
    cout << iRet <<"\n";

    return 0;
}