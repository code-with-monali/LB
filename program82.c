#include<stdio.h>
#include<stdlib.h>    // malloc navachya function sathi

void Fun(int Arr[], int iLength)
{ 
    // logic
}
int main()
{
    int iSize = 0;  // user kdunsize ghenya sathi
    int *ptr= NULL;  
    int iCnt = 0;  // loop counter sathi

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

    Fun(ptr,iSize);

    free(ptr);

     return 0;
}