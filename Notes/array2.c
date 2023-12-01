//finding max and min elements in array

#include<stdio.h>


void main()
{
    int secondLargest=0;
    int a[5]={6,1,9,2,3};
    
    //first method
    
    int max = a[0];
    int min = a[0];
    for(int i=0 ; i<5; i++){
    	if(a[i]>max){
    		max=a[i];
		}
	}
	printf("Maximum:%d\n", max);

    for(int i=0 ; i<5 ; i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Minimum:%d\n",min);

//2nd largest

secondLargest = a[0];

for(int i=0; i<5; i++){
    if(a[i]<max && a[i]>min){
        secondLargest = a[i];
    }
}

printf("Second Largest:%d\n", secondLargest);
    //swapping element

  

    //Swapping variables-reverse the indexing6
    for(int i=0,j=4 ; i<=2 ; i++,j--){
            int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    for(int i=0; i<5 ;i++){
    
printf("%d " , a[i]);
}


    


}