#include<stdio.h>


void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)  //O(N)
        {
        printf("%d\n",iCnt);
        }
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

// Time complexity : O(N)
// where 

/*
Enter number
8
output
1
2
4
*/