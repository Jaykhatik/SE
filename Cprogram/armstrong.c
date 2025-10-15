#include <stdio.h>

void main() {
    int n, sum;

    // check for 123
    n = 123;
    sum = (n/100)*(n/100)*(n/100) + ((n/10)%10)*((n/10)%10)*((n/10)%10) + (n%10)*(n%10)*(n%10);

    if(sum == n)
        printf("%d is Armstrong\n", n);
    else
        printf("%d is not Armstrong\n", n);

    // check for 153
    n = 153;
    sum = (n/100)*(n/100)*(n/100) + ((n/10)%10)*((n/10)%10)*((n/10)%10) + (n%10)*(n%10)*(n%10);

    if(sum == n)
        printf("%d is Armstrong\n", n);
    else
        printf("%d is not Armstrong\n", n);
}
