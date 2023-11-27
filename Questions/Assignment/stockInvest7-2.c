#include<stdio.h>
double ci(double investment,double percent , double months, double year ){
     for(int i=1 ; i<=months*year ; i++){
        investment=investment+investment*((percent/100));
     }
     return investment;
}
void main()
{
     double inveTCS = 10000,inveInfosys = 5000;

     double Infosys=ci(5000,5,12,1);
     double TCS=ci(10000,6,12,1);
     printf("Total amount after 1 yr(P+I):\nTCS:%lf\nInfosys:%lf:",TCS,Infosys);
     printf("\n\nBenefit on \nTCS:%lf and on\nInfosys:%lf",TCS-inveTCS,Infosys-inveInfosys);
}