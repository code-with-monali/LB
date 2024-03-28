//Addition of two numbers and numbers taking by user
// ha daynamic vala program ha bcoz run krtana input thrvave lagte.
// dynamic input application(run time)
#include<stdio.h>  // yani header file include hote

int main()
{
    int No1 = 0;
    int No2 =0;
    int Ans = 0;

    printf("Enter first number : \n"); // hey pf sf ya sathi aale bcoz user kdun aapn input magtoy
    scanf("%d" ,&No1); // accept the input from user

    printf("Enter second number : \n"); // display  the output on console
    scanf("%d" ,&No2);

    Ans = No1+No2;
    printf("Addition is : %d\n" ,Ans);

    return 0;

}