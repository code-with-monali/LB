//Enter how many elements are stored

#include<stdio.h>      // pf & sf sathi
#include<stdlib.h>    /* malloc and standard function sathi
                       mhnje ch dyanamic memory memory*/
int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");   //1
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));      //2
     if(ptr == NULL)
     {
        printf("Unable to allocate memory\n");
        return -1;
     }

     printf("Memory allocated succesfully....\n");
    return 0;
}