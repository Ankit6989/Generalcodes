#include<stdio.h>
#include<conio.h>

void main()
{
int i,n;
int value;
int sum = 0;

printf("enter the number n ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    sum=sum+i;
}
printf("sum = %d ",sum);
getch();
}
