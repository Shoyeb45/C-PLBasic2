#include<stdio.h>
void evenOrOdd(int);
void main()
{
    int x;
    printf("Enter number you want to enter:");
    scanf("%d", & x);

    evenOrOdd(x);
}

void evenOrOdd(int a){
    if(a % 2 == 0)
    printf("You entered even number.");
    else
    printf("You entered odd number.");
    
}