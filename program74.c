#include<stdio.h>   //sf pf means ip op sathi
#include<stdlib.h>   // memory management 

int main()        //Entry point function
{
  int iSize = 0;  // to store size of array
  int * ptr = NULL; // to store address of array
  int iCnt = 0;  // Loop Counter 

  //Step1 : Accept the number of elements from user
  printf("Enter number of elements : \n");
  scanf("%d",&iSize);

  //Step2 : Alocate memory dynamically
  ptr = (int*)malloc(iSize * sizeof(int));

 //Step3 : Accept the values from user
  printf("Enter the elements : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  printf("Elements of array are : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\n",ptr[iCnt]);
  }
   return 0;    // Return success to OS
}
