#include <stdio.h>


int findSecondLargest(int a, int b, int c, int d) {
    
    if (b > a) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (c > a) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (d > a) {
        int temp = a;
        a = d;
        d = temp;
    }

    
    int secondLargest = b;
    if (c > secondLargest) {
        secondLargest = c;
    }
    if (d > secondLargest) {
        secondLargest = d;
    }

    return secondLargest;
}

void main() {
    int a, b, c, d;

    printf("Enter the four number : ");
    scanf("%d %d %d %d", &a, &b,&c , &d);

   

    int result = findSecondLargest(a, b, c, d);

    printf("Second largest integer: %d\n", result);

    
}
