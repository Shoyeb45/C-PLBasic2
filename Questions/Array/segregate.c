#include<stdio.h>

void main()
{
    // int n;
// printf("Enter length of array.:");
// scanf("%d", n);
    int num[6];

    for(int i=0 ; i<6 ; i++){
        printf("%d element:",i+1);
            scanf("%d", & num[i]);
    }

int positive[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int negative[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
    for(int i=0, k=0 ; i<6 ; i++, k++){
          if(num[i] > 0)
          positive[k]=num[i] ; 
          else
          negative[k]=num[i] ;
    }

printf("Positive Numbers in Array:\n");
    for(int i=0 ; i<10 ; i++){
        if(positive[i] == 0)
        printf("");
        else
        printf("%d ", positive[i]);
    }

printf("\nNegative Numbers in Array:\n");
    for(int i=0 ; i<10 ; i++){
        if(negative[i] == 0)
        printf("");
        else
        printf("%d ", negative[i]);
    }    



}