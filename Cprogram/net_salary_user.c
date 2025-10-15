#include<stdio.h>
struct employee
{
    int id;
    char name[10];
    float basic_sal,da,hra,gross,tax,net_sal;
};
void main(){
    struct employee ns;
    printf("enter the employee id : ");
    scanf("%d",&ns.id);
    printf("enter employee name : ");
    scanf("%s",&ns.name);
    printf("enter basic salary : ");
    scanf("%f",&ns.basic_sal);
    printf("Basic salary : %f\n",ns.basic_sal);
    ns.da = (ns.basic_sal*2)/100;//calculation of DA
    printf("Da : %f\n",ns.da);
    ns.hra = (ns.basic_sal*3)/100;//calculation Of HRA
     printf("HRA : %f\n",ns.hra);
    ns.gross = ns.basic_sal + ns.da +ns.hra;//calculation of GROSS
     printf("Gross : %f\n",ns.gross);
    ns.tax = (ns.gross*3)/100;//calculation of tax
     printf("Tax : %f\n",ns.tax);
    ns.net_sal = ns.gross - ns.tax;//The Perfect Net Salary
     printf("Net salary of employee : %f\n",ns.net_sal);
}
