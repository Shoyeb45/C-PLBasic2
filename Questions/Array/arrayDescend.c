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
int temp;
    for(int i=0 ; i<n ; i++){
        int smallest = i;
        for(int j=i+1 ; j<n ; j++){
            if(a[i]>a[j]){
smallest =j;
temp=a[smallest];
a[smallest]=a[i];
a[i]=temp;
            }

        }
    }

    for(int i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }

return 0;
}
