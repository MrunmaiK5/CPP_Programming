#include<iostream>
using namespace std;

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

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter 1st number: ";
    cin >> iValue;

    bRet = CheckEvenOdd(iValue);

    cout << "Result is: " << bRet << "\n";   

    return 0;
}