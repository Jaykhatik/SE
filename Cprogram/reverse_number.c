#include <stdio.h>

void main() {
    int num, num1 = 0, temp;

    printf("enter the number: ");
    scanf("%d", &num);
    printf("the number is %d\n", num);

    while (num > 0) {
        temp = num % 10;
        num1 = num1 * 10 + temp;
        num = num / 10;
    }

    printf("reverse number: %d\n", num1);
}
