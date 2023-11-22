#include<stdio.h>
int max(int ,int);
void main()
{
    int a,b,c,d,e;
    printf("Enter the five numbers:");
    scanf("%d%d%d%d%d", &a ,&b ,&c ,&d ,&e);
    
    int Max = max(e,max(d,(max(c,max(a,b))))) ;
    int Min = min(e,min(d,(min(c,min(a,b))))) ;
    printf("Maximu value is %d and minimum is %d",Max,Min);
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