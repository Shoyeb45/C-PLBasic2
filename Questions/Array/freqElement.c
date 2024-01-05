#include<stdio.h>

int main()
{
    int a[5] = {13, 25, 12, 11 ,25};
    int freq[5];

    for(int i=0; i<5 ; i++){
        freq[i] = -1;
    }

int counter;

for(int i=0; i<5; i++){
   counter = 1;
    for(int j=i+1; j<5; j++){
        if(a[i] == a[j]){
            counter++;
            freq[j] = 0;
        }
    }
    if(freq[i] != 0){
        freq[i] = counter ; 
    }
}

for(int i=0 ; i<5; i++){
    if(freq[i] != 0){
        printf("%d occurs %d times\n", a[i], freq[i]);
    }
}
    return 0;
}