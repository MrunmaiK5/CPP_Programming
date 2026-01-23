#include<iostream>
using namespace std;

bool CheckEvenOdd(int iNo)
{
    return ((iNo%2) == 0);
}

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