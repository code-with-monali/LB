#include<stdio.h>

void DisplayDigits(int iNo)
{
   int iDigit = 0;
   for(;iNo != 0; iNo = iNo/10)  // iNo = 10 krayche nahi nantr iNo mhnje user n takleli value ch 0 hoin
   {
      iDigit = iNo % 10;
      printf("%d\n",iDigit);
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