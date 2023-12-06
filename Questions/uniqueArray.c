
#include<stdio.h>

void main()
{
    int a[10]={1,2,2,3,4,5,6,2,8,6};

    for(int i=0 ; i<10 ; i++){
        int temp=1;
        for(int j=0 ; j<10 ; j++){
            if(i!=j){
			
        if( a[i] == a[j] ){
             temp+=1;           
        }
            }
    }
    if(temp==1)
    {
        printf("%d ",a[i]);
    }
 }
}