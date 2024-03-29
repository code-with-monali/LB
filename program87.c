#include<stdio.h>
#include<stdlib.h>    // malloc navachya function sathi
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
   bool bFlag = false;
   int iCnt = 0;

   for( iCnt =0; iCnt< iLength; iCnt++)
   {
    if(Arr[iCnt] == iNo)
    {
        bFlag = true;
        break;
    }
   }
   return bFlag;
}

int main()
{
    int iSize = 0;  // user kdunsize ghenya sathi
    int *ptr= NULL;  
    int iCnt = 0;
   int iValue = 0;
    bool bRet = false;  

     printf("Enter number of elements : \n");
     scanf("%d",&iSize);

     ptr = (int *)malloc(iSize * sizeof(int)); // malloc function call kele 

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to seach : \n");
    scanf("%d",&iValue);

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize;  iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

     bRet = Search(ptr,iSize, iValue);
     if(bRet == true)
     {
    printf("%d is present in the array\n",iValue);
     }
     else{
        printf("%d is not present in the array\n",iValue);
     }
    free(ptr);

     return 0;
}