#include<stdio.h>
#include<stdlib.h>    // malloc navachya function sathi


void MinimumMaximum(int Arr[], int iLength)
{
int iCnt = 0;
int iMin = Arr[0];
int iMax = Arr[0];

for(iCnt = 0; iCnt < iLength; iCnt++)
{
    if(Arr[iCnt] < iMin)
    {
        iMin = Arr[iCnt];
    }
    if(Arr[iCnt] > iMax)
    {
        iMax = Arr[iCnt];
    }
}
  printf("Largest element is : %d\n",iMax);
  printf("Largest element is : %d\n",iMax);
   }

int main()
{
    int iSize = 0;  // user kdunsize ghenya sathi
    int *ptr= NULL;  
    int iCnt = 0; 

     printf("Enter number of elements : \n");
     scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int)); // malloc function call kele 

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize;  iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    MinimumMaximum(ptr, iSize);
    
    free(ptr);

     return 0;
}