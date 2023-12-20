#include<stdio.h>

int h(int a){
    a*=10;
}

int y(int a){
    int c = h(a);
    a = c*10;
}

int main()
{
    int a=8;
    y(a); 
    printf("%d",a);
    //The change inside the function is not affected outside the function.
}