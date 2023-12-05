#include<stdio.h>
#include"header.h"

void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    printf("\nAddition %d and Multiplication:",add(a,b), mult(a,b));
  
}
