#include<stdio.h>
#include<conio.h>

void main()
{
    int letter;
    char x;

    printf("enter the letter \n");
    x = getchar();

    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
        printf("The letter is a vowel");
    else
        printf("It is a constant");
    getch();
}




