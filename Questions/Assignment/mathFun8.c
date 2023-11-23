#include<stdio.h>

float function(float);

void main()
{
    float x;
    printf("f(x)=10x+10\n");
    printf("Enter value of x to get the f(x) at that point.:\n");
    scanf(" %f", & x);

    printf("f(%f)=%f",x,function(x));

}

float function(float a){
    return 10*a+10;
}
