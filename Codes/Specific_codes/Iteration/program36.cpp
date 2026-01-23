#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 5; iCnt>=iNo; iCnt--)
    {
        cout << iCnt <<"\t";
    }
}

int main()
{
    Display(7);

    return 0;
}