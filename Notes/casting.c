#include<stdio.h>

void main()
{
    int n=4 , m=10;
    double h = m/n;
    printf("%lf \n",h);

    //Now by conversion we'll get real output

    h = (double)m/(double)n;
    printf("%lf \n",h);

}