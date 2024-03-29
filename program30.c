#include<stdio.h>
#include<stdbool.h>  // boolean data type sathi

bool CheckPrime(int iNo)  // helper function
{
  int iCnt = 0;   //local variabl
  bool bFlag = true;  //local

  for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
        bFlag = false;
        break;
    }
  }
  return bFlag;
}

int main()
{
  int iValue = 0;
  bool bRet = false;   // false mhnje initally 0

  printf("Enter number : \n");
  scanf("%d",&iValue);     //user kdun input ghenyasathi, tey &iValue variable madhe store kele.

  bRet = CheckPrime(iValue);   
  
  if(bRet == true)
  {
    printf("%d is prime number \n", iValue);
  }
  else
  {
    printf("%d is not a prime number \n", iValue);
  }
    return 0;
}