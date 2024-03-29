#include<stdio.h>

// ya pgm madhe input madhe space dila tr tey sagl input ghete.
int strlenCapital(char *str)
{
  int iCount = 0;

  while(*str != '\0')
{
  if((*str >= 'A') && (*str <= 'Z'))
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

     iRet = strlenCapital(Arr);  // strlenX(100);

    printf("Length of Small letters are : %d\n",iRet);

    return 0;
}