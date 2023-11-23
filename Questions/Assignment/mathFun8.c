#include<stdio.h>

int function(int);

void main()
{
    int x;
    printf("f(x)=10x+10\n");
    printf("Enter value of x to get the f(x) at that point.");
    scanf("%d", & x);

    int c=function(x);
    printf("f(%d)=%d",x,c);

}

int function(int a){
    return 10*a+10;
}
