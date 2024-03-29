#include<stdio.h>

void strcpySmallX(char *src, char *dest) 
{
   while(*src != '\0')
   {
    if((*src >= 'a') && (*src <= 'z'))
    {
        *dest = *src;
        dest++;   // hey aat ka ghete smjun gheych
    }
    src++;
   
   }
   *dest = '\0';  // heych saglyat imp aahe.
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr); 

    strcpySmallX(Arr,Brr);  // 100, 200

    printf("String after copy is : %s\n",Brr);

    return 0;
}