#include<stdio.h>

void main()
{ 
    //Defining array
    int a[5]={1,2,3,4,5};

    //printing array after overwriting the first value of array.
for(int i=0; i<5 ;i++){
    a[i]=a[1];
printf("%d " , a[i]);
}


}