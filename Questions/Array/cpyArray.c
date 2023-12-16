#include<stdio.h>

void dup(int a[], int len, int cpy[]){
    for(int i=0 ; i<len ; i++){
    cpy[i] = a[i]; 
}
}

void main()
{
    int a[6]={1, -9, 4, 0, 1, 10};
int duplicate[6]={0, 0, 0, 0, 0, 0};

dup(a, 6, duplicate);

for(int i=0 ; i<6 ; i++){
    printf("%d ", duplicate[i]);
}


    
    



}