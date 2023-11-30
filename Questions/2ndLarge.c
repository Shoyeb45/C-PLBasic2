#include <stdio.h>

    int Largest(int a, int b, int c, int d){
        int large;
          if(a>b && a>c && a>d){
             large = a;
          }
          else if(b>a && b>c && b>d){
              large = b;
          }
          else if(c>a && c>b && c>d){
              large = c;
          }
          else
          {
               large = d;
          }

         
         int ans=a;
         if (b > ans && b < large) {
        ans = b;
    }
    if (c > ans && c < large) {
        ans = c;
    }
    if (d > ans && d < large) {
    ans = d;
    }
     return ans;
}
          
    

      int main ()  {
          int a;
          printf("Enter a digit :");
          scanf("%d",&a);
          int b;
           printf("Enter b :");
          scanf("%d",&b);
           int c;
           printf("Enter c :");
          scanf("%d",&c);
           int d;
           printf("Enter d :");
          scanf("%d",&d);
          int ans = Largest(a,b,c,d);
          printf("The second largest number is: %d",ans );
          return 0;
      }