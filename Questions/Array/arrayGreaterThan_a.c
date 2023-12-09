//Selection Sort

#include<stdio.h>

int main()
{
    int n;
   
    printf("Enter the size of array:");
    scanf("%d",&n);
     int a[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }

    int b;
    printf("Enter the number for comparing:");
    scanf("%d", &b);
int range;
    for(int i=0 ; i<n ; i++){
        int count=0;
        if(a[i]>b){
range=i;
count++;
        }
        if(count==1)
        printf("%d ",a[range]);
           }
return 0;
}