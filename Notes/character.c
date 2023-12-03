#include<stdio.h>

int facto(int number){
	int mult=1;
	if(number == 0 ){
        return 1;
    }
    else
	for(int i=1 ; i<=number ; i++ ){
		mult *= i;
	}

    return mult;
}

void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("\nFactorial of %d = %d ",n , facto(n));
}