////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description   : It is used to display multiplication of factors of given number
// Input         : Integer
// Output        : Integer
// Author        : Shaikh Irfan Jamshed
// Date          : 01/11/2025
//
////////////////////////////////////////////////////////////

#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors: %d\n", iRet);

    return 0;
}
