#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,temp;
printf("enter the values of a \n");
scanf("%d",&a);
printf("enter the values of b \n");
scanf("%d",&b);

temp=a;
a=b;
b=temp;

printf("the reversed value of is %d %d\n",a,b);

getch();
}
