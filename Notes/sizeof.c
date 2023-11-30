#include<stdio.h>

void main()
{
    char a='d',b=78;
    int c=45; 
    long u=3412;
    long double pi = 3.14159265;

    printf("%d\n", sizeof(b+c)); //As c is int so by adding it takes ascii value of b which is integer.
    printf("%d\n", sizeof(pi));
    printf("%d\n", sizeof(b));  //because b is character
    printf("%d\n", sizeof(u+c));
    printf("%d\n", sizeof(u));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(a+b));

    long double o=1.223243435345352;
    printf("%d",sizeof(o));

}