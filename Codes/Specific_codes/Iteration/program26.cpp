#include<iostream>
using namespace std;

void Display(int iCount)
{
    int iCnt = 0;
    for(iCnt=1; iCnt<=iCount; iCnt++)
    {
        cout << "Jay Ganesh...\n";
    }
}

int main()
{
    int iValue = 0;
    cout << "Enter the frequency: \n";
    cin >> iValue;

    Display(iValue);

    return 0;
}