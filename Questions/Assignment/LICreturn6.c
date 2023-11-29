#include<stdio.h>
double expo(double number,double power){
    double extra=1;
    for(int i=1 ; i<=power ; i++){
            extra*=number;
    }
    return extra;
}

double sip(double inve,double dura,double i){
    return inve*((expo(1+i,dura)-1)/i)*(1+i);
}

void main()
{
    int deposit = 5000 ,duration = 60;
    double deducePerc = 12;
    double rate = 8.5;
    double CIrate = 0.01; 

   double ReturnAmt = sip(deposit,duration,0.01);
   printf("Amout after 5 years:");
   printf("%lf", ReturnAmt); 

   printf("\nSince company is deducing 12 percent of total amount at the end of five years.");
   printf("\nFinal return:%lf",((ReturnAmt)-(deducePerc/100)*(ReturnAmt-deposit)));
   
    

}