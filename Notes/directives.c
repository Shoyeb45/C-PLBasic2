#include<stdio.h>
#define NOSCAN

void main()
{ int a;
    #ifdef NOSCAN
    a=6;
    #else
    a=10;
    #endif

    printf("%d",a ); 
}