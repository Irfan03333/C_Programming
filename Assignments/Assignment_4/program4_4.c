////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description   : It is used to return summation of all non-factors of given number
// Input         : Integer
// Output        : Integer
// Author        : Shaikh Irfan Jamshed
// Date          : 01/11/2025
//
////////////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of non-factors: %d\n", iRet);

    return 0;
}
