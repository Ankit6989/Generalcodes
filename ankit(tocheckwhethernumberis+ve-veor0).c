#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    if(n<0)
        printf("the number is negative");
    else if(n>0)
        printf("the number is positive");
        else
            printf("it is 0");
        getch();

}
