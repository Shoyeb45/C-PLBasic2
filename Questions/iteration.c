#include<stdio.h>

void ser(int a){
    printf("%d ", a);
}

void main()
{
    int n;
    printf("Number of terms:");
    scanf("%d", &n);

    for(int i=1 ; i<=n;i++){
        ser(10*i);
    }
    for(int i=1;i<=n;i++){
printf("%d",10*i);
    }
}