#include<stdio.h>
int perfect(int);

void main(){
           int n;
printf("Enter the value of n:");
scanf("%d",&n);

int perfectnum= perfect(n);

if(perfectnum == n)
printf("The number is perfect number.");
else
printf("The number is not perfect number.");
}


int perfect(int a) {
int sum=0;

    for(int i=1; i<=a-1; i++) {
            if(a%i==0) {
sum+= i;
}
   return sum;
}
}

