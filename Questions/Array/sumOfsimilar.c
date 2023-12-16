#include<stdio.h>

void main()
{
      int num[6];

    for(int i=0 ; i<6 ; i++){
        printf("%d element:",i+1);
            scanf("%d", & num[i]);
    }
    int duplicate[6]={0, 0, 0, 0, 0, 0};
int count=0;
    for(int i=0; i<6 ; i++){
        for(int j=0; j<6 ; j++){
            if(i != j){
        if(num[i] == num[j]){
             count=1;
             duplicate[i] = num[i];
        }
        }
        }
    }

    if(count == 1){
        int sum=0;
        for(int i=0 ; i<6 ; i++){
            sum = sum + duplicate[i];
        }
       printf("Sum of duplicate elements is %d",sum);
    }
    else{
        printf("0");
    }

}