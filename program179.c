//Capital letterch small letter madhe change kraycha tyachya corresponding.
#include<stdio.h>

void strlwrX(char *str) // strlw hey inbuilt function
{
while(*str != '\0')
{
    if((*str >= 'A') && (*str <= 'Z'))
    {
        *str = *str + 32;
    }
    str++;

}
}
int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);  // 21,23,25 ya line madhe ya pgm chi power aahe.

    strlwrX(Arr);

    printf("String after editing is : %s\n",Arr);

    return 0;
}