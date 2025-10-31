///////////////////////////////////////////////////////////////////////////////
////
//
//	Function Name : Accept
//	Description   : It displays '*' on screen according to the number entered.
//	Input         : Integer (Number of stars)
//	Output        : Printed '*' pattern on the screen
//	Author : Shaikh Irfan Jamshed
//	Date : 31/10/2025
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