#include<stdio.h>

void main()
{
    int a[5]={2,4,1,2,4};
//   int temp=a[4];
//       for(int i=4 ; i>0 ;  i--){
//         a[i]=a[i-1];
// }
// a[0]=temp;
// for (int i = 0; i < 5; i++)
// {
//   printf("%d ", a[i]);
// }

for(int i=0 , j=4 ; i<5/2; i++,j--){
  int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
}


for (int i = 0; i < 5; i++)
{
  printf("%d ", a[i]);
}
  
}