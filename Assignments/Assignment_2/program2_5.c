///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Description   : Accept number from user and check whether number is even or odd
//  Input         : Integer
//  Output        : Boolean (True/False)
//  Author        : Shaikh Irfan Jamshed
//  Date          : 31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}
