#include<stdio.h>

void EditString(char *str)
{
while(*str != '\0')
{
    if(*str == ' ')
    {
        *str = '_';
    }
    str++;

}
}
int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);  // 21,23,25 ya line madhe ya pgm chi power aahe.

    EditString(Arr);

    printf("String after editing is : %s\n",Arr);

    return 0;
}