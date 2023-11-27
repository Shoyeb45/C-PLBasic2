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
    int inveTCS = 10000 ,inveInfosys = 5000;
    double TCSPerc = 0.06*12 , InfosysPerc = 0.05*12;
//We have to convert it into decimal to put in formula.
//using compound interest formula
    int n=12;//As monthly return
    double r_1 = TCSPerc/n , r_2 = InfosysPerc/n ;  
    double amtTCS = inveTCS*expo(1+r_1,n);

    double amtInfosys = inveInfosys*expo(1+r_2 , n); 

printf("Total amount after 1 yr(P+I):\nTCS:%lf\nInfosys:%lf:",amtTCS,amtInfosys); 

printf("\n\nBenefit on \nTCS:%lf and on\nInfosys:%lf",amtTCS-inveTCS,amtInfosys-inveInfosys);
    

}