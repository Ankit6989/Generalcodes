//Name: Ankit Parida  RollNo: 216320007

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,rev;
    printf("enter the number n:  ");
    scanf("%d",&n);

    while(n>0)
    {
    rev=(rev*10)+(n%10);
    n=n/10;
    }
    printf("rev = %d \n",rev);
    printf("This program is made by Ankit Parida. Roll no: 216320007");

    getch();
}
