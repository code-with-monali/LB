//user kdun string gheychi and tya sting madhl pratek capital letter replace kraych * n.
#include<stdio.h>

void EditString(char *str)
{
while(*str != '\0')
{
    if((*str >=  'A') && (*str <= 'Z'))
    {
        *str = '*';
    }
    else if((*str >= 'a') && (*str <= 'z'))
    {
       *str = '$';
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