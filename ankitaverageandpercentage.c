#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,sum;
    float avg,percent;

    printf("enter the marks of the student in subject a \n");
    scanf("%d",&a);
    printf("enter the marks of the student in subject b \n");
    scanf("%d",&b);
    printf("enter the marks of the student in subject c \n");
    scanf("%d",&c);
    sum=a+b+c;
    printf("the total marks obtained by the child is %d \n",sum);
    avg=sum/3;
    printf("the average marks of the child is %f \n",avg);
    percent=(sum*100)/300;
    printf("the percentage of child is %f \n",percent);
    getch();

}
