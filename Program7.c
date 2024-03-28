//Write a program which checks whether number is even or odd.

#include<stdio.h>       //For printf and scanf
#include<stdbool.h>     // For bool data type

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

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0)  && ((iNo % 5) == 0))
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
    bool bRet = false;        // Variable to accept return value

    printf("please enter number to check whether it is divisible by 3 AND 5 : \n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);   //Function call
    
    if(bRet == true)
    {
        printf("%d is completly divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not completly divisible by 3 and 5\n",iValue);
    }
    return 0;
}

/*
Logical Operators

1 : Logical AND &&
2 : logical OR  ||

-----------------------------------------------------------------------
---------------
Expression1        Expression2     &&      ||
true                true           true     true
true                false          false    true
false               true           false    true
false               false          false    false
------------------------------------------------------------------------
----------------------
*/