#include<stdio.h>

// ya pgm madhe input madhe space dila tr tey sagl input ghete.
int strlenCountChar(char *str)
{
  int iCount = 0;

  while(*str != '\0')
{
  if( *str == 'z')
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

     iRet = strlenCountChar(Arr);  // strlenX(100);

    printf("Number of z  are : %d\n",iRet);

    return 0;
}