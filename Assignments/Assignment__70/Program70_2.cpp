#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :  Sum
//  Description     :  Returns summation of digits of given number using recursive function.
//  Input           :  Integer
//  Output          :  Integer
//  Author          :  Mrunmai Jitendra Khadpe
//  Date            :  13/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : 879
    Output : 24
*/

int Sum(int iNo)
{
    static int iSum = 0;
    static int iDigit = 0;

    if (iNo >= 1)
    {
        iDigit = iNo%10;
        iSum = iSum + iDigit;   
        Sum(iNo/10);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter a number : ";
    cin >> iValue;

    iRet = Sum(iValue);
    cout << iRet <<"\n";

    return 0;
}