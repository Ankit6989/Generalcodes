#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    int n;
    int prime = 1;
    printf("enter the number you want to check:  ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
            prime=0;
    }
    if(prime==0)
    {
        printf("not prime");
    }
    else
    {
        printf("yes prime");
    }
    getch();
}
