#include<stdio.h>
void main(){

    //Program To calculate Simple Interest!!

    int principle = 100;
    int interest= 15;
    int time_years = 3;

    int simple_interest= (principle * interest * time_years)/100; //calculation of SI
    int totalAmount = principle + simple_interest;//Total Amount After SI

    printf("Principle:%d\n",principle);
    printf("Interest:%d\n",interest);
    printf("Time Of Years :%d\n",time_years);
    printf("Simple Interest :%d\n",simple_interest);
    printf("Total Amount:%d\n",totalAmount);

}
