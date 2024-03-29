//Accept n numbers from user perform addition of n numbers
#include<stdio.h>   //sf pf means ip op sathi
#include<stdlib.h>   // memory management 

int EvenCount(int Arr[], int iLength)
{
  int iCnt = 0;
  int iCounter  = 0;

for(iCnt = 0; iCnt < iLength; iCnt++)
{
  if((Arr[iCnt] % 2) == 0)
  {
   iCounter++;
  }
}
return iCounter;
}

int main()        //Entry point function
{
  int iSize = 0;  // to store size of array
  int * ptr = NULL; // to store address of array
  int iCnt = 0;  // Loop Counter 
  int iRet = 0;

  //Step1 : Accept the number of elements from user
  printf("Enter number of elements : \n");
  scanf("%d",&iSize);

 //Step2 : Allocate memory dynamically
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

 // Step 4 : pass the array to the function
  iRet = EvenCount(ptr,iSize);  // Demo (400,4);....function cha call aahe
  printf("Even elements are : %d\n",iRet);
  
 //Step6 : Deallocate the memory of arraay 
  free(ptr);

 return 0;  // Return success to OS
}