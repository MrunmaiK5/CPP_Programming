#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Sum
//  Description:    Returns summation of digits of a number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           15/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    static int iTemp=iNo;
    static int iSum=0, iDigit=0;

    if(iTemp>0)
    {
        iDigit = iTemp%10;
        iSum=iSum+iDigit;
        iTemp=iTemp/10;
        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue=0, iRet=0;

    cout << "Enter a number: ";
    cin >> iValue;

    iRet = Sum(iValue);
    cout << "Summation: " << iRet << "\n";

    return 0;
}