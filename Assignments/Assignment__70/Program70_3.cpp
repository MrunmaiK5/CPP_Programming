#include<iostream>
#include<stdio.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :  strlenX
//  Description     :  Returns length of string using recursive function.
//  Input           :  Integer
//  Output          :  Integer
//  Author          :  Mrunmai Jitendra Khadpe
//  Date            :  13/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input : hello
    Output : 5
*/

int strlenX(char *str)
{
    static int iCount = 0;

    if (*str != '\0')
    {
        iCount++;
        strlenX(str+1);
    }
    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter a stirng : ");
    scanf("%s",arr);

    iRet = strlenX(arr);
    cout << iRet <<"\n";

    return 0;
}