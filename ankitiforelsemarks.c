#include<stdio.h>
#include<conio.h>

void main()
{

int a,b,c;

printf("enter the marks of child a\n");
scanf("%d",&a);
printf("enter the marks of child b\n");
scanf("%d",&b);
printf("enter the marks of child c\n");
scanf("%d",&c);

if(a>b&&c<a)
    printf("student a is topper");
else if(b>a&&c<b)
    printf("student b is topper");
else
    printf("student c is topper");

    getch();
}

