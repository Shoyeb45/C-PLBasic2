#include<stdio.h>

void main()
{
    int a = 8;
    float v =3.45;
    double o=5.342;
    char s ='j';

    printf("%f\n",a*v);  //Sizeof(v)>sizeof(a) ,so overall conversion to float
    printf("%lf\n",o/v);//Sizeof(v)<sizeof(o) ,so overall conversion to double
    printf("%d\n",s+a);
    printf("%e",a*v); //If taken with different type conversion then throws an error
    }