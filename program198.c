#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{
  for(;(( *str1 != '\0' ) && (*str2 != '\0') &&(*str1 == *str2)); str1++, str2++);// yethe 1st true nhi aale tr 2nd check hot nhi tey false ch hote.
 return((*str1 == '\0') && (*str2 =='\0'));
}

int main()
{

    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter first string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string : \n");
    scanf("%[^'\n']s",Brr);
    
    bRet = strcmpX(Arr,Brr);  //call by address(100,200)

    if(bRet == true)
    {
        printf("Both the strings are identical\n");

    }
    else
    {
        printf("Both the strings are different\n");
    }
    return 0;
}