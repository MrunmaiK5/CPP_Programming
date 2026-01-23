#include<iostream>
using namespace std;

int Add(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}

int main()
{
    int i=0, j=0, ans=0;

    cout << "Enter 1st number: ";
    cin >> i;
    cout << "Enter 2nd number: ";
    cin >> j;

    ans = Add(i,j);

    cout << "Addition is: " << ans << "\n";

    return 0;
}