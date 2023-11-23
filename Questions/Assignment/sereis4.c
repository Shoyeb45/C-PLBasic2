#include<stdio.h>

int factorial(int);

void main()
{
    int sum = 0;
    int n ;
    printf("Enter number of terms:");
    scanf("%d", & n);

    for(int i=1 ; i<=n ; i++){
        printf("(%d!/%d) ",i,i);
        sum += factorial(i)/i;
    }
    printf("\nSum is %d .",sum);
}

int factorial(int a){
    int i;
    int facto = 1;
    for (i=a ; i>=1 ; i--){
        facto =facto * i;
    }
    return facto;
}