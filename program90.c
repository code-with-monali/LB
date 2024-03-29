#include<stdio.h>
#include<stdlib.h>    // malloc navachya function sathi

int SearchFirstOccurance(int Arr[], int iLength, int iNo)
{
   
   int iCnt = 0;
   for( iCnt =0; iCnt< iLength; iCnt++)
   {
    if(Arr[iCnt] == iNo)
    {
        break;
    }
   }
   if(iCnt == iLength)
   {
    return -1;
   }
   else
   {
    return iCnt;
   }
}

int main()
{
    int iSize = 0;  // user kdunsize ghenya sathi
    int *ptr= NULL;  
    int iCnt = 0;
    int iValue = 0, iRet = 0;
   
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int)); // malloc function call kele 

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to serach : \n");
    scanf("%d",&iValue);

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize;  iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
     iRet = SearchFirstOccurance(ptr,iSize, iValue);
    
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
      printf("%d occured at index %d\n", iValue,iRet);
    }
    free(ptr);

     return 0;
}