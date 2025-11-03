////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description   : Accept one character from user and convert case of that character
// Input         : Character
// Output        : Character
// Author        : Shaikh Irfan Jamshed
// Date          : 01/11/2025
//
////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c", cValue + 32);
    }
    else if ((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c", cValue - 32);
    }
    else
    {
        printf("Invalid character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
