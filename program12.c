// 

#include<stdio.h>

void Display(int iNo)    //userdefined function
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("Jay Ganesh....\n");
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency of Jay Ganesh statemen : \n");  // Hey pattern printing aahe. main madhe printf aahe mhnun
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}