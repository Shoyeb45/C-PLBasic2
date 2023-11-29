#include<stdio.h>

void main()
{
    int weightSum=0;
    printf("\t***Table***");
    printf("\nItem      Weight      Profit\n");
    printf("\nItem1      3kgs      12Rs");
    printf("\nItem2      4kgs      16Rs");
    printf("\nItem3      5kgs      20Rs\n");
 int IW[3]={3,4,5};
 int IP[3]={12,16,20};    
printf("\nWe can't take 6 items all two at once .Since:\n2*Weight of Item1(%d) + 2*Weight of Item2(%d) + 2*Weight of Item3(%d)=%d",IW[0],IW[1],IW[2],2*(IW[0]+IW[1]+IW[2]));
 for(int i=0 ; i<3; i++){
 }
}