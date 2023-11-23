#include<stdio.h>
int max(int ,int);
int min(int,int);
void main()
{
    int a,b,c,d;
    printf("Enter the five numbers:");
    scanf("%d%d%d%d%d", &a ,&b ,&c ,&d);
    
    int Max = max(d,(max(c,max(a,b))));
    int Min = min(d,(min(c,min(a,b)))) ;
    printf("Maximum value is %d and minimum is %d",Max,Min);
    //one way is to write the conditionals statements for each . now using function
    
}

int max(int a, int b){
    if(a>=b)
    return a;
    else
    return b;
}
int min(int a, int b){
    if(a<=b)
    return a;
    else
    return b;
}