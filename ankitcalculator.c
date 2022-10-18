//Name: Ankit Parida  RollNo: 216320007

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,ch,result;
    printf("enter the first value: \n");
    scanf("%d",&a);
    printf("enter the second value: \n");
    scanf("%d",&b);
    printf("choose the operation (+,-,*,/): \n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        result=a+b;
        break;
    case 2:
        result=a-b;
        break;
    case 3:
        result=a*b;
        break;
    case 4:
        result=a/b;
        break;

    default:
        printf("invalid input\n");
    }
    printf("your result is %d\n",result);

    printf("This program is made by Ankit Parida. Roll no: 216320007");

    getch();


}





