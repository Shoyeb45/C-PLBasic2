#include<stdio.h>
#include<math.h>
int SumSeries (int,int );
void main()
{
int a,n;
printf("Enter the value of a and n:");
scanf("%d %d", &a, &n);
int c= SumSeries(a, n);
printf("The sum of the series is %d.",c);
}
int SumSeries(int a, int n) {
double sum=1;
for(int i=n;i>=1; i--) { sum += pow(a, i);
}
return sum;
}