#include<stdio.h>

int main()
{
    int n; 
    
    printf("Enter the number of terms to be printed:");
scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        printf("%d ",3*i+1);
    }
return 0;
}