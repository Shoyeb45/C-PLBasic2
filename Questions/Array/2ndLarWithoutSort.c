//Finding second largest element in array

#include<stdio.h>

int main()
{
    int a[5] = {1, 12, 3, -9, 23};

int lar = 0;  int j;
    for(int i=0; i<5 ; i++){
        if(lar < a[i]){
            lar = a[i];
            j = i;
        }
    }

    //For second largest

    int large2nd = 0;

    for(int i=0 ; i<5 ; i++){
        if(i == j)
        {

        }
        else{
            if (large2nd < a[i]){
                large2nd = a[i];
            }
        }
    }

    printf("Second largest is:%d",large2nd);
}