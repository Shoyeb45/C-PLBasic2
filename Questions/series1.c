#include<stdio.h>

void main()
{
        int n , sum =0;
    printf("Enter the value of n(number of terms):");
    scanf("%d",& n);

    for (int i=110 ; i<=(100*n+10) ; i+=100){
        sum=sum+i;

        printf("%d ",i);
    }
    printf("\n%d", sum);
}