#include<iostream>
using namespace std;

float Add(float fNo1, float fNo2)
{
    float fSum = 0.0f;

    if(fNo1 < 0)
    {
        fNo1=-fNo1;
    }

    if(fNo2 < 0)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;
    return fSum;
}

int main()
{
    float fValue1=0.0f, fValue2=0.0f, fRet=0.0f;

    cout << "Enter 1st number: ";
    cin >> fValue1;
    cout << "Enter 2nd number: ";
    cin >> fValue2;

    fRet = Add(fValue1, fValue2);

    cout << "Addition is: " << fRet << "\n";

    return 0;
}