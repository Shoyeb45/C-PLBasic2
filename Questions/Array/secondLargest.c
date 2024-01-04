#include<stdio.h>

float *find2max( float A[], int size){
    float temp=0;
    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ;j++){
            if(A[i] < A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    float *_2max_ = &A[1];
    return _2max_;
}

int main()
{
    float A[4] = {1.2, 4.5, 3.4, 9.0};

    printf("%f\n", *find2max(A, 4));
for(int i=0; i<4 ; i++){
    printf("%f ",A[i]);
}
}