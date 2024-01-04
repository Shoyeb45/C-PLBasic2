#include<stdio.h>

void print(int a[], int len){
    for(int i=0; i<len ; i++){
        printf("%d ",a[i]);
    }
}

int main()
{
    int a[6];
    printf("Insert the array:\n");

    for(int i=0; i<6; i++){
        printf("Enter element %d:",i+1);
        scanf("%d",& a[i]);
    }
printf("\nInserted array is:\n");
    print(a, 6);

int n;
    printf("\nEnter position to remove the element:");
    scanf("%d",&n);

    a[n-1] = 0;

printf("\nNew Array:\n");
    for(int i=0; i<6 ; i++){
        if(a[i] != 0)
        printf("%d ",a[i]);
    }

    return 1;
}