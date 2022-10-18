#include<stdio.h>
#include<conio.h>

void main()
{
    int l,b,perimetre;
    printf ("enter the value of l and b \n");
    scanf("%d%d",&l,&b);
    perimetre=(l+b)*2;
    printf("the perimetre of rectangle is %d",perimetre);
    getch();
}
