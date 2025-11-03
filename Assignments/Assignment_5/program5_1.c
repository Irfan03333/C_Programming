///////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description   : It is used to check whether a number is even or odd
// Input         : Integer
// Output        : Void
// Author        : Shaikh Irfan Jamshed
// Date          : 01/11/2025
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

void CheckEvenOdd(int num)
{
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);
    return 0;
}
