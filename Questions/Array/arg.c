#include<stdio.h>

int chanval(int a){
    a=5;
    return a;
}
void main()
{
    int a=8;
    a = chanval(a);
    
    printf("%d", a);
}