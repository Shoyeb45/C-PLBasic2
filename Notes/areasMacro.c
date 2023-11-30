#include<stdio.h>
#define pi 3.14
#define cir(radius) pi*radius*radius
#define sq(a) a*a
#define rect(c,d) 2*(c+d)
void main()
{
int r,a,c,d;
printf("Enter the radius of circle:"); scanf("%d",&r);
printf("\nEnter the side of square:"); scanf("%d", &a);
printf("\nEnter the length and breadth of rectangle"); scanf("%d %d", &c, &d);
printf("\nArea of circle: %f ",cir(r));
printf("\nArea of square: %d ",sq(a)); printf("\nArea of rectangle: %d ", rect(c,d));
}