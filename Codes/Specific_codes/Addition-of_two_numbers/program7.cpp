#include<iostream>
using namespace std;

int Add(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    int iValue1=0, iValue2=0, iRet=0;

    cout << "Enter 1st number: ";
    cin >> iValue1;
    cout << "Enter 2nd number: ";
    cin >> iValue2;

    iRet = Add(iValue1, iValue2);

    cout << "Addition is: " << iRet << "\n";

    return 0;
}