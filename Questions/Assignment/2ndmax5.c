#include<stdio.h>

int max(int,int);

void main()
{
    int a,b,c,d;

    printf("Enter four numbers:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

   int Max = max(d,max(c,max(a,b)));

   int secondLar = a;

   if( b > secondLar && b < Max )
   secondLar =  b;
   if(c > secondLar && c < Max)
   secondLar = c;
   if(d > secondLar && d < Max)
   secondLar = d;

printf("Second largest number is %d", secondLar);

  
}

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}