#include<stdio.h>

void main()
{
    int n;
    printf("Enter number to check whether number is prime or not:");
    scanf("%d",&n);

int count=0;
    for(int i=1;i<=n ; i++){
        if(n%i == 0){
            count=count+1;
        }
    }
if(n==1){
printf("The number is neither prime nor composite\n");
}
else if(count == 2){
        printf("You entered the prime number.");
}
else
    {
        printf("The number you entered is not a prime number.");
    }
}