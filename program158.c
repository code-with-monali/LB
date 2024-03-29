#include<stdio.h>

// ya pgm madhe input madhe space dila tr tey sagl input ghete.
int main()
{
    char Arr[15];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);    // ya syntax mule 

    printf("Your name is : %s\n",Arr);

    return 0;
}