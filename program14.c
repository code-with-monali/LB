
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)    // Updator
    {
        iNo = -iNo;           // inside the updator aapn return nste lihayche.
    }


    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh....\n");
    }

}
int main()
{
   int iValue = 0;

   printf("Enter the frequency of Jay Ganesh statement : \n");
   scanf("%d", &iValue);

   Display(iValue);
   return 0; 
}