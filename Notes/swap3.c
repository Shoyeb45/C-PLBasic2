#include<stdio.h>

void swap(int x,int y){
    int temp =x;
    x=y;
    y=temp;
}
void main()
{
    int a,b;

    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);

    printf("Now swapping the number.");
    swap(a,b);
    printf("\na=%d , b=%d",b,a);
}