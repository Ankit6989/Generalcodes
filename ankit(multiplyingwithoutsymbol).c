#include<stdio.h>
#include<conio.h>

void main()
{

int i,a,b,product;
int sum  = 0;
printf("enter the value of a   ");
scanf("%d",&a);
printf("enter the value of b   ");
scanf("%d",&b);


for(i=1;i<=a;i++)
{
    sum=sum+b;
}
printf("product = %d",sum);
getch();
}

