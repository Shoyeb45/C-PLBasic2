#include<stdio.h>

void main()
{
    printf("Date: %s\n", __DATE__);
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("stdc: %s\n", __STDC__);
    printf("Time: %s\n", __TIME__);
}