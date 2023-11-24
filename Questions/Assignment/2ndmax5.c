#include<stdio.h>

int max(int,int);
int min(int,int);

void main()
{
    int a,b,c,d;

    printf("Enter four numbers:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    int m = max(c,max(a,b));

    if(m>d)
    printf("%d",d);
    else
    printf("%d",m);
}

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}