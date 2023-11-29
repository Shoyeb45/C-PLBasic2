#include<stdio.h>

int sum(int n){
    if( n==1){
        printf("%d ", n);
        return n;
    }else{
        printf("%d ", n);
        return n + sum(n-1);
    }
}
void main()
{
    int num, s;

    printf("Enter n:");
    scanf("%d", &num);

    s =sum(num);

    printf("\n%d", s);
}