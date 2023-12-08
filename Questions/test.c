#include<stdio.h>
void test(int);
void main()
{
    int num=8;
    
    test(num);
}

void test(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("\n********%d table starts********",i);
    for(int j=1;j<=10;j++)
     {
         printf("\n%d*%d=%d",i,j,i*j);
     }
     printf("\n********%d table is over********\n",i);
    }
}






