#include<stdio.h>
#include<stdlib.h>

// ya pgm madhe input madhe space dila tr tey sagl input ghete.
int CountChar(char *str, char cValue)
{
  int iCount = 0;

  while(*str != '\0')
{
  if(*str == cValue)
  {
    iCount++;  
  }
  str++;
}
  return iCount;
}



int main()
{
    char Arr[20];
    char ch = '\0';
     int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    // ya syntax mule

    fflush(stdin);

    printf("Enter the character  : \n "); 
    scanf("%c",&ch);


    iRet = CountChar(Arr,ch);  // strlenX(100);

    printf("Number of Occurance  are : %d\n",iRet);

    return 0;
}