///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It displays numbers from 5 to 1 on screen using a loop.
//  Input         : None
//  Output        : None
//  Author        : Shaikh Irfan Jamshed
//  Date          : 31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int i = 5;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}
