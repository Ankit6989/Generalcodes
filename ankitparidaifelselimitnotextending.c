#include<stdio.h>
#include<conio.h>

void main()
{

int n;
printf("enter the marks of student \n");
scanf("%d",&n);

if(n>30&&n<100)
    printf("student is passed");
else if(n<30)
    printf("student is failed");
else
    printf("invalid input");

getch();

}
