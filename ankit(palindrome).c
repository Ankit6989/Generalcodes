#include<stdio.h>
#include<conio.h>

void main()
{
    int r,n,sum = 0, temp;
    printf("enter the number to check whether its palindrome or not:  ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
    }
    if(temp==sum)
     printf("palindrome number");
    else
     printf("not palindrome");
getch();

}
