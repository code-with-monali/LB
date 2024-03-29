// Accept number from user and display its factor
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         printf("%d\n",iCnt);    
    }
}

int main()
{
    int iValue = 0;

     printf("Enter number : \n");
     scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}
/*
Enter number
8
output
1
2
4
8
*/