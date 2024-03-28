//Write a program which accepts the marks and display the class accordingly
// 0 to 34    Fail
// 35 to 49   pass class
// 50 to 59   second class
// 60 to 74   First class 
// 75 to 100  First class with Destinction

#include<stdio.h>       //For printf and scanf
    
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
void DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.00f))  //Filter
    {
        printf("Invalid Input\n");
        printf("Please enter the marks in between the range 0 to 100");
        return;
    }

if((fMarks >= 0.0f) && (fMarks < 35.00f))
{
    printf("You are fail\n");
}
else if((fMarks >= 35.00f) && (fMarks < 50.00f))
{
    printf("You got pass class\n");
}
else if((fMarks >= 50.00f) && (fMarks < 60.00f))
{
    printf("You got second class\n");
}
else if((fMarks >= 60.00f) && (fMarks < 75.00f))
{
    printf("You got first class");
} 
else if((fMarks >=75.00f) && (fMarks <= 100))
{
    printf("You got first class with Distinction\n");
}
}
int main()
{
    float fValue = 0.0f;

    printf("Please enter your percentage : \n");
    scanf("%f" ,&fValue);

    DisplayClass(fValue);

return 0;
}