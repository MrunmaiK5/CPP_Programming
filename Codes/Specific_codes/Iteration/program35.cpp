#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;
    for(iCnt = 5; iCnt>=1; iCnt--)
    {
        cout << iCnt <<"\t";
    }
}

int main()
{
    Display();

    return 0;
}