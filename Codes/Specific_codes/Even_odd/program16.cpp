#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CheckEvenOdd
//  Description:    it is used to check even odd
//  Input:          integer
//  Output:         boolean
//  Author:         Mrumai jitendra khadpe
//  Date:           10/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if (iRem == 0)
    {
        return true;
    }
    else
    {
        return false;  
    }
    
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter 1st number: ";
    cin >> iValue;

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        cout << iValue <<" is an even number\n";   
    }
    else 
    {
        cout << iValue << " is an odd number\n";   
    }

    return 0;
}