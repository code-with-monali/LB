
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)   // Filter
    {
        printf("Please enter the positive number\n");
        return;           //-ve number o/p dile tr code yethech thambto baher pdto. loop run hotch nhi yat
// return chya pudhe 0 nhi bcoz void aahe mhnun nhitr error yein 0 dile tr
    }
    for(iCnt = 1; iCnt <=iNo; iCnt++)
{
    printf("Jay Ganesh...\n");
}
}
int main()
{
    int iValue = 0;

    printf("enter the frequency of Jay Ganesh statement : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}