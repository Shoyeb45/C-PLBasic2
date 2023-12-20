#include<stdio.h>

int a=1, b=2, c=3;
int f(void);
void main()
{
   printf("%d\n",f());
printf("%d %d %d",a, b, c); // redefined a in f function
}

int f(void){
    int b, c; // variable of f function
    a = b = c =4;
    return a+b+c;
}