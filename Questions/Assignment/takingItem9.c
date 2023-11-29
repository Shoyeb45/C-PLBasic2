#include<stdio.h>

void main()
{
    int weightSum=0;
    int sumProfit=0;
    printf("\t***Table***");
    printf("\nItem      Weight      Profit\n");
    printf("\nItem1      3kgs      12Rs");
    printf("\nItem2      4kgs      16Rs");
    printf("\nItem3      5kgs      20Rs\n");
 int IW[3]={3,4,5};
 int IP[3]={12,16,20};    
printf("\nWe can't take 6 items all two at once. \nBecause,\n2*Weight of Item1(%d) + 2*Weight of Item2(%d) + 2*Weight of Item3(%d)=%d > 20",IW[0],IW[1],IW[2],2*(IW[0]+IW[1]+IW[2]));
 
 printf("\n All sum of combination of items taken 5 times.\n");

 for(int i=0 ; i<3; i++){
    for(int j=0 ; j<3 ; j++){
    weightSum=IW[0]+IW[1]+IW[2]+IW[i]+IW[j];
    printf("%d \n",weightSum );
    }
 }

 printf("As we can see there are many sum values which is less than 20. So now we'll segregate these sum.\n\tSegregated sum values:\n");
 for(int i=0 ; i<3; i++){
    for(int j=0 ; j<3 ; j++){
    weightSum=IW[0]+IW[1]+IW[2]+IW[i]+IW[j];
    if(weightSum<=20)
    printf("%d \n",weightSum );
    }
 }

 printf("Now we'll check the profits corresponding to each combinations");

  for(int i=0 ; i<3; i++){
    for(int j=0 ; j<3 ; j++){
    weightSum=IW[0]+IW[1]+IW[2]+IW[i]+IW[j];
    if(weightSum<=20 && i!=j){
    sumProfit=IP[0]+IP[1]+IP[2]+IP[i]+IP[j];
    printf("\nSum of profits: Item1 + Item2 + Item3 + Item%d + Item%d = %d (Weight sum=%d)", i+1 , j+1,sumProfit,weightSum);
    }
    }
 }
}