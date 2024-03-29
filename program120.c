/*
input :
Row : 4
Col : 5

Output :
# # # # #
* * * * *
# # # # #
* * * * *


*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Arr[2] = {'*', '#'};
             //1    //2       //3
        for(i = 1; i <= iRow; i++)    // outer
    {    //   1       2        3
        for(j = 1; j <= iCol; j++)   //Inner
        {
            printf("%c\t",Arr[(i%2)]);   //4
        }
        printf("\n");

    }
}

int main()
{
 int iValue1 = 0, iValue2 = 0;

 printf("Enter number of rows : \n");
 scanf("%d",&iValue1);

 printf("Enter number of columns : \n");
 scanf("%d", &iValue2);

 Display(iValue1,iValue2);

    return 0;
}