#include<stdio.h>

int main()
{
    int i,j,n;
    printf("enter the number : ");
    scanf("%d",&n);

    printf("factors of %d are :",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("\n %d",i);

    }

    return 0;
}
