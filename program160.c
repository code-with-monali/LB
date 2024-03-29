#include<stdio.h>

// ya pgm madhe input madhe space dila tr tey sagl input ghete.
int strlenX(char str[])
{

}
int main()
{
    char Arr[10];
     int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    // ya syntax mule

     iRet = strlen(Arr);

    printf("Length of String is : %d\n",iRet);

    return 0;
}