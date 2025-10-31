///////////////////////////////////////////////////////////////////////////////
////
//
//	Function Name : Display
//	Description   : It displays numbers from 5 to 1 on the screen using a while loop.
//	Input         : None
//	Output        : Printed numbers from 5 to 1
//	Author : Shaikh Irfan Jamshed
//	Date : 31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 5;
    while(i>=1)
    {
        printf("%d",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}
