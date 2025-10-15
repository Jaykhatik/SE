#include<stdio.h>
void main()
{
    int month_slary;
    int tax;
    int net_salary;
    printf("Enter your monthly salary : ");
    scanf("%d",&month_slary);
    int anual_sal=month_slary*12;
    printf("Annual salary is : %d\n",anual_sal);
    if(anual_sal>=300000&&anual_sal<=500000)
    {
        tax=3;
    }
    else if(anual_sal>=500000&&anual_sal<=700000)
    {
        tax=5;
    }
    else if(anual_sal>=700000&&anual_sal<=1000000)
    {
       tax=7;
    }
    else if(anual_sal>=1000000&&anual_sal<=1300000)
    {
        tax=13;
    }
    else
    {
        printf("you are a thief!!!!!");
    }
         int tax_amt=(anual_sal*tax)/100;
        printf("your tax amount is %d\n",tax_amt);

        net_salary=anual_sal-tax_amt;
        printf("your net salary is %d",net_salary);

}
