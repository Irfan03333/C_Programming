///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description   : It accepts one number and prints that many '*' symbols on screen.
//  Input         : Integer
//  Output        : Printed '*' pattern
//  Author        : Shaikh Irfan Jamshed
//  Date          : 31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}
