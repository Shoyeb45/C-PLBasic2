#include<stdio.h>

void main()
{
    int n , r, m, reverse=0 , sum=0;
    printf("Enter the number(all with different digits):");
    scanf("%d",&n);

    for(int i=n; i>0 ; i/=10){
         r=i%10;
         reverse=(reverse*10)+r;
    }
    printf("\nReverse number:%d",reverse);
    if(reverse>n){
        m=reverse-n;
        printf("\nNow check sum of digit of:");
        printf("\n%d-%d=%d\n",reverse,n,m);
    }else{
        m=n-reverse;
        printf("\nNow check sum of digit of:\n");
        printf("\n%d-%d=%d\n",n,reverse,m);
    }
    for(int i=m; i>0 ; i/=10){
        r=(i%10);
        sum+=r;
        printf("%d ",r);
    }
    printf("\nThat is:%d",sum);

    
 

}