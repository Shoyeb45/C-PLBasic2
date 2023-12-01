#include<stdio.h>

int facto(int x){
   if(x==1 || x==0){
   	return 0;
   }

void main()
{
    int n;
    printf("Enter the number to get a factorial of number.:");
    scanf("%d", &n);
 int c=facto(n);
 
 printf("%d" , c);

}