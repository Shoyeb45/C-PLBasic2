#include <stdio.h>
void test(int);
void main()
{
    int n;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        test(i);
    }
    
}

void test(int a)
{
    printf("\n***********\nScanned value is:\n");
    scanf("%d",&a); 
    printf("value after scan %d",a);
}