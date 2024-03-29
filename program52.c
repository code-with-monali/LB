// prm 51 using for loop

#include<stdio.h>

void DisplayDigits(int iNo)
{
   int iDigit = 0;

   for( ;iNo != 0; )  // fkt 2nd condition takaychi agodar nantr ; vaprayche
   {
      iDigit = iNo % 10;
      printf("%d\n",iDigit);
      iNo = iNo/10;
   }

}
int  main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);


DisplayDigits(iValue);
    return 0;
}


// Input : 7854
//Output :     4
//             5
//             8
//              7