#include<stdio.h>

int main()
{
    int i,j,n,key=1;
    printf("enter the number ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        key=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                key = 0;
                break;
            }
        }
        if(key==1)
            printf("%d \n",i);
    }
    return 0;
}
