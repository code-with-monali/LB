#include<stdio.h>

float DigitsAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }
    while(iNo != 0)
    {
       iDigit = iNo % 10;
       iSum = iSum + iDigit; /* hey 16,17 line ch khali vrti jhale tri ky frk pdt nhi*/
       iCount++;
       iNo = iNo/10;
    }
   return((float)iSum/ (float)iCount);
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = DigitsAverage(iValue);

    printf("Average of digits is : %f\n",fRet);

    return 0;
}