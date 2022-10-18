#include<stdio.h>

int main()
{
    int i,n,r,sqr;
    printf("enter the number N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sqr=n*n;
    }
    printf("the square of %d is: %d" ,n,sqr);
    return 0;
}
