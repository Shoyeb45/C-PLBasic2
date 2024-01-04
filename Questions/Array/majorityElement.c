// Write a program in C to find the majority element of an array.
// A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).

#include<stdio.h>

int main()
{
    int a[8] = {1, 1, 3, 4, 78, 1, 98, 1};
    int freq[8];
    for(int i=0 ; i<8 ; i++){
        freq[i] = -1;
    }
int count;
    for(int i=0 ; i<8 ; i++){
        count = 1;
        for(int j = i+1 ; j<8 ; j++){
            if(a[i] == a[j]){
               count++;
               freq[j] = 0;
            }
        }

        if( freq[i] != 0 ){
            freq[i] = count;
        }
    }

int majorElement = 0; 
    for(int i=0 ; i<8 ; i++){
        if(freq[i] >= 4){
          majorElement = a[i];
        }
    }

    printf("Major element in array is:%d", majorElement);



}