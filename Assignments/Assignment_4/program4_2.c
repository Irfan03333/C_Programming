////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : It is used to display factors of given number in decreasing order
// Input         : Integer
// Output        : None (Displays factors)
// Author        : Shaikh Irfan Jamshed
// Date          : 01/11/2025
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}
