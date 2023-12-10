#include<stdio.h>

void main()
{
    int n , a=1, r=2; 
    
    printf("Enter the number of terms to be printed:");
scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        printf("%d\t",a);
        a*=r;
    }

}