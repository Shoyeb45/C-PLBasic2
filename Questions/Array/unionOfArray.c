#include<stdio.h>
//Funtion for assigning set1 and set2 to Union Set which contain all the elements
void assign(int a[], int b[], int len1, int len2){
        for(int i=0,k=len2; i<len1 ; i++, k++){
                b[k] = a[i];
        }
}
int main()
{
        int A[5]={1, 2, 0, 5, 6};
        int B[5]={2, 0, 5, 4, -1};
int Union[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        assign(A, Union, 5, 0);
        assign(B, Union, 5, 5);


printf("Union of A and B set is:");
        for(int i=0; i<10 ; i++){
                int count=0; //For duplicate element
                for(int j=i+1 ; j<10 ; j++){
                        if(Union[i] == Union[j] && Union[j] != (int)&A[4] ){ //Second condition for not repeating thing
                                Union[j] = (int)&A[4];
                             ++count;
        }
                }
                    if(count)
                    printf("%d ", Union[i]);
                    else{
                    if(Union[i] != (int)&A[4])
                    printf("%d ", Union[i]);
}
                
        }
        // printf("%d ", &A[4]);
}