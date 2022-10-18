#include<stdio.h>
#include<conio.h>

void main()
{
int i,n;
int sum = 0;
int remainder;

printf("enter the number n   ");
scanf("%d",&n);

while(n>0)
{
    remainder =n%10;
    sum = sum+remainder;
    n = n/10;
}
printf("internal addition = %d",sum);
getch();
}
