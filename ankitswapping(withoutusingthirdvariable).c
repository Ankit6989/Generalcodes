#include<stdio.h>

int main()
{

int a,b;
printf("enter the number a \n");
scanf("%d",&a);
printf("enter the number b \n");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("the value of a and b %d  %d",a,b);
return 0;

}

