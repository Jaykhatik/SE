#include<stdio.h>
void main(){

    //Program To calculate Simple Interest and take all values from user!!

    int principle;
    printf("enter principle : ");
    scanf("%d",&principle);
    int interest;
    printf("enter interset : ");
    scanf("%d",&interest);
    int time_years;
    printf("enter time: ");
    scanf("%d",&time_years);

    int simple_interest= (principle * interest * time_years)/100; //calculation of SI
    int totalAmount = principle + simple_interest;//Total Amount After SI

    printf("Principle:%d\n",principle);
    printf("Interest:%d\n",interest);
    printf("Time Of Years :%d\n",time_years);
    printf("Simple Interest :%d\n",simple_interest);
    printf("Total Amount:%d\n",totalAmount);

    //Program To calculate Net Salary!!

    int basic_salary;//Basic Salary
    printf("enter basic salary : ");
    scanf("%d",&basic_salary);
    int da = (basic_salary*2)/100;//calculation of DA
    int hra = (basic_salary*3)/100;//calculation Of HRA
    int gross = basic_salary + da +hra;//calculation of GROSS
    int tax = (gross*3)/100;//calculation of tax
    int net_salary = gross - tax;//The Perfect Net Salary

    printf("Basic Salary=%d\n",basic_salary);
    printf("DA=%d\n",da);
    printf("HRA=%d\n",hra);
    printf("Gross Salary=%d\n",gross);
    printf("Tax=%d\n",tax);
    printf("Net salary =%d\n",net_salary);

}
