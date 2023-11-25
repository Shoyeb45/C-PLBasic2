#include<stdio.h>
double expo(double number,double power){
    double extra=1;
    for(int i=1 ; i<=power ; i++){
            extra*=number;
    }
    return extra;
}

void main()
{
    int deposit = 5000 ,t = 5;
    double deducePerc = 12;
    double r = 8.5/100; //We have to convert it into decimal to put in formula.

   double amt = deposit*expo(1+r,t);
   printf("Amout after 5 years:");
   printf("%lf", amt); 

   printf("\nSince company is deducing 12 percent of total amount at the end of five years.");
   printf("\nFinal return:%lf",amt-(deducePerc*amt)/100);
   
    

}