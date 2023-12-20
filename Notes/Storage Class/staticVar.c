#include<stdio.h>

int f(void);

void main()
{
    printf("%d\n",f());
    printf("%d\n",f());
    printf("%d\n",f());
}

int f(void){
    static int c=0; //everytime function  will be called, the value is not reassigned to 0, it will retain value
    ++c;
    return c;
}