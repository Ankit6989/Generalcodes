#include<stdio.h>
#include<conio.h>
 void main()
 {
     int n,r,sum=0,temp;
     printf("enter an integer");
     scanf("%d",&n);
     temp=n;

     while(n>0)
     {
         r=n%10;
         sum=sum+r*r*r; //(can also be written as sum+=r*r*r)
         n=n/10; //(n/=10)
     }
     if(temp==sum)
        printf("armstrong number");
     else
        printf("not an armstrong number");
     getch();
 }
