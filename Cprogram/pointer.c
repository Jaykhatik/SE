#include<stdio.h>
void main(){
int PIN=123;
int *b=&PIN;
printf("Pin address: %x\n",&PIN);
printf("pointer address :%x\n",b);
printf("value of B: %d\n",*b);
PIN=321;
printf("After value change: %d\n",*b);
*b=451;
printf("pin value change by pointer %d\n",PIN);
}
