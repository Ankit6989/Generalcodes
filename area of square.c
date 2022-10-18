//Name: Ankit Parida  RollNo: 216320007

#include <stdio.h>
void area();

int main()
{
   area();
   return 0;
}

void area()
{
    int area,side;

    printf("Enter the side of square:");
    scanf("%d",&side);
    area = side*side;
    printf("Area of Square = %d",area);
    printf("\nThis program is made by Ankit Parida. Roll no: 216320007");
}
