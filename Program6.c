//Accept number from user and check whether that number is even or odd.

#include<stdio.h>       //For printf and scanf
#include<stdbool.h>     // For bool data type. true and false sathi

///////////////////////////////////////////////////////////////
//
// Function name : CheckEvenOdd
// Input :         Integer
// Output :        Boolean
// Description :   Checks whether input is even or odd
// Author :        Monali Shrikrushna Ranjun
// Date :          25/04/2023
// Update Date :
//
////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)      // user defined function    // CheckEvenOdd la camelcase
{
if((iNo % 2) ==0)
{
    return true;
}
else
{
    return false;
}
}

////////////////////////////////////////////////////////////////
//Entry Point function
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;           //Variable to accept input
    bool bRet = false;        // Variable to accept return value. bRet hi return value sathi aahe. Ret means return.

    printf("please enter number to check whether it is even or odd : \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);   //Function call
    
    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0;
}