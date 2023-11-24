#include<stdio.h>

int add(int,int);

void main()
{
   printf("%d",add(2,56));
}
//1.function with with argument and with return type.
int add(int a , int b){
    return a+b;
}
