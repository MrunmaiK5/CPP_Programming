#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            cout << iCnt <<"\t";
        }
    }
}

int main()
{
    int iValue = 0;
    
    cout << "Enter a frequency: ";
    cin >> iValue;

    Display(iValue);

    return 0;
}