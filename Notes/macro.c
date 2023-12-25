#include<stdio.h>
#define integer int
#define a 5+5
#define square(b) b*b 
void main()
{
    integer b=9;
    integer c = b*a; // evaluation : 9*5+5 = 45+5 = 50
    printf("%d",c);

    printf("\n%.2f", square(1.6));  



}