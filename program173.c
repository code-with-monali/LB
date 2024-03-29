#include<stdio.h>
#define ERR_NOTFOUND -1   // error code

int FirstOccurance(char *str, char cValue)
{
    int iCnt = 1;
   

    while((*str != '\0') && (*str != cValue))
    {
        str++;
        iCnt++;
    }
    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }

}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enterthe character : \n");
    scanf(" %c",&ch);  // ya line la %c chya adhi space dene.

    iRet = FirstOccurance(Arr,ch);//Arr call by address & ch call by value mhnun use.
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character");
    }
    else
    {
    printf("First Ocurrance of that character is at : %d\n",iRet);
    }
    return 0;
}