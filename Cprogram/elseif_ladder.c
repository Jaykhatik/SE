#include<stdio.h>
void main(){
int a;
printf("enter the note:");
scanf("%d",&a);
if(a==5){
    printf("5 is available");
}
else if(a==10){
    printf("10 is available");
}
else if(a==20){
    printf("20 is available");
}
else if(a==50){
    printf("50 is available");
}
else if(a==100){
    printf("100 is available");
}
else{
    printf("%d is not available",a);
}
}
