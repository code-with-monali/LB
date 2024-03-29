#include<stdio.h>

// ya pgm madhe input madhe space dila tr tey sagl input ghete.
int strlenWhiteSpace(char *str)
{
  int iCount = 0;

  while(*str != '\0')
{
  if(*str != ' ')
  {
    iCount++;  
  }
  str++;
}
  return iCount;
}



int main()
{
    char Arr[10];
     int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    // ya syntax mule

     iRet = strlenWhiteSpace(Arr);  // strlenX(100);

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}