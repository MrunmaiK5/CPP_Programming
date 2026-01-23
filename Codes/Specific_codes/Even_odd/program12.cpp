#include<iostream>
using namespace std;

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if (iRem == 0)
    {
        cout << "It is an even number\n";
    }
    else
    {
        cout << "It is an odd number\n";   
    }
    
}

int main()
{
    int iValue = 0;

    cout << "Enter 1st number: ";
    cin >> iValue;

    CheckEvenOdd(iValue);

    return 0;
}