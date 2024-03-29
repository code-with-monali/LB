//Input : 7
//Output : # # # # # # # 

//input : 3 
//Output :  # # #

#include<stdio.h>

void Display(int iNo)
{
int iCnt = 0;

for(iCnt = 1; iCnt <= iNo; iCnt++)
{
printf("#\t");
}
printf("\n");   // hey nhi takle tri o/p madhe ky frk nhi disla.
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}