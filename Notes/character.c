#include<stdio.h>

void main()
{
    char a,b;
//Taking input from different form
printf("Enter a:");
scanf("%c",&a);

printf("Enter b:");
b=getchar();

printf("\na=%c",a);
putchar(b);

}