#include<stdio.h>

int fu(int *x, int *y){
   return *x+ *y; 
}

void change(int *x, int *y){
    *x=*x *10/2;
    *y=*y *10;
}
int main()
{
    int a=10, b=30;
    int c=fu(&a, &b);
    printf("%d",c);

change(&a, &b); // As from pass by reference change made inside the function affects main function.
printf("\n a = %d and b = %d",a, b);
return 0;
}