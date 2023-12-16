#include<stdio.h>

void main()
{
    double a[6];
    for(int i=0; i<6; i++){
        printf("Enter element number %d:",i+1);
        scanf("%lf", &a[i]);
    }
//Let's print address of each element to verify that array element are conigous memory.
    for(int i=0; i<6; i++){
        printf("Address of elemnt number %d : %d\n", i+1, (int)&a[i]);
//In output you can see the difference of 8 between addresses of each element.
    }

  
}