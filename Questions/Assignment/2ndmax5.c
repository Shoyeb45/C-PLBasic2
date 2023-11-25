#include<stdio.h>

int max(int,int);
int min(int,int);

void main()
{
    int a,b,c,d;

    printf("Enter four numbers:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);



    if(max(a,b)> max(c,d))
    printf("%d", max(c,d));
    else
    printf("%d",max(a,b));
}

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}