#include<stdio.h>
#include<conio.h>

void main()
{

int n,b;
printf("enter the number \n");
scanf("%d",&n);
b=n%10;
if(b==5)
{
    n=n*n;
printf("square = %d ",n);
}
else
    printf("invalid number");
getch();
}

