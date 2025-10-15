#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[10];
    float salary;
};
int main()
{
    int i;
    struct employee e[5];
    for(int i=0; i<5; i++)
    {
        printf("enter employee id : ");
        scanf("%d",&e[i].id);
        printf("enter employee name : ");
        scanf("%s",e[i].name);
        printf("enter employee salary : ");
        scanf("%f",&e[i].salary);

    }
    for(int i=0;i<5;i++){
         printf("Employee Id:%d\n",e[i].id);
        printf("Employee Name:%s\n",e[i].name);
        printf("Employee Salary:%f\n",e[i].salary);

    }

    return 0;
}
/*
void main()
{
    struct employee e[5]=
    {
        {1,"jay",100000.89},
        {1,"rahul",77000.89},
        {1,"prashant",56000.89},
        {1,"madhuri",35000}
    };
      printf("size of structures variable:%d\n",sizeof(e));
    for(int i=0;i<4;i++){
        printf("Emp id=%d,Emp Name:%s,Emp Salary:%.2f\n",
               e[i].id,e[i].name,e[i].salary);
    }
}*/
