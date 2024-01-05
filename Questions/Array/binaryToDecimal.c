#include<stdio.h>
int expo(int x,int n){
    int expone=1;
    for(int i=1; i<=n ; i++)
    expone*=x;

    return expone;
    
}

void main()
{
    int a[4];
    for(int i=0; i<4 ;i++){
           printf("Enter %d element:",i+1);
           scanf("%d",&a[i]);          
    }

    double Decimal=0;
    for(int i=3, j=0; i>=0 ; i--,j++){
        Decimal = Decimal +a[i]*expo(2,j);
    }
    printf("Decimal number is: %.0lf",Decimal);
}