#include<stdio.h>

int max(int,int);

void main()
{
    int a,b,c,d;

    printf("Enter four numbers:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    int m= max(a,b);
    int n= max(b,c);
    int s= max(c,d);

    if(max(m,n)> max(n,s))
    printf("%d", max(n,s));
    else
    printf("%d",max(m,n));
}

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}