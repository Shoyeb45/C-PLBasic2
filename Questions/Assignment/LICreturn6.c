#include<stdio.h>
double sip(double inve,double dura,double i){
    return inve*((((1+i)*(dura))-1)/i)*(1+i);
}

void main()
{
    int deposit = 5000 ,duration = 12*5;
    double deducePerc = 12;
    double rate = 8.5;
    double CIrate = rate/100*rate; 

   double ReturnAmt = sip(deposit,duration,0.01);
   printf("Amout after 5 years:");
   printf("%lf", ReturnAmt); 

   printf("\nSince company is deducing 12 percent of total amount at the end of five years.");
   printf("\nFinal return:%lf",((ReturnAmt)-(deducePerc/100)*(ReturnAmt-deposit)));
   
    

}