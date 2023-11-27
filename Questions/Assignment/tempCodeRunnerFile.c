#include<stdio.h>
double ci(double inves,double perc , double n , int t){
     for(int i=1 ; i<n*t ; i++){
        inves=inves*((perc/100));
     }
     return inves;
}
void main()
{
     double infosys=ci(5000,5,12,1);
     printf("%lf",infosys);
}