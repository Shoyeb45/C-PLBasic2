#include<stdio.h>
double ci(double inves,double perc , double n ){
     for(int i=1 ; i<=n ; i++){
        inves=inves+inves*((perc/100));
     }
     return inves;
}
void main()
{
     double infosys=ci(100,5,12);
     printf("%lf",infosys);
}