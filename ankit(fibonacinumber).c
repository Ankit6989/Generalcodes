#include<stdio.h>
#include<conio.h>

void main()
{

int n,i;
int a=-1,b=1;
int sum;
printf("enter the number n:  ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    sum=a+b;
    a=b;
    b=sum;
    printf(" %d ",sum);
}
getch();
}

