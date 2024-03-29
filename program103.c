//Input : 7
//Output :A B C D E F G

//input : 3 
//Output :A B C

#include<stdio.h>

void Display(int iNo)
{
int iCnt = 0;
char ch = 'A';

//     1         2           3
for(iCnt = 1; iCnt <= iNo; iCnt++)
{
printf("%c\t",ch);    //4
ch++;
}
printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}