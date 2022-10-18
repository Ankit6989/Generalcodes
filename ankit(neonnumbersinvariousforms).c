#include<stdio.h>
#include<conio.h>

void main()
{
 int r,n,sum=0,sqr;
 printf("enter the number n:  ");
 scanf("%d",&n);
 sqr=n*n;

 while(sqr>0)
 {
 r=sqr%10;
 sum=sum+r;
 sqr=sqr/10;
}

    if(sum==n)
        printf("it is a neon number %d\n",n);
    else
        printf("it is NOT a neon number %d\n",n);
        getch();
}
