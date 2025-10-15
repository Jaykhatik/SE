#include<stdio.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
void main()
{
    struct employee data[100];
    int ch,en=0,i,eid;
    do
    {
        printf("1.For insert employee\n");
        printf("2.show all employee data\n");
        printf("3.For search employee by id\n");
        printf("4.continue\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            printf("Enter how many employee you want to insert\n");
            scanf("%d",&en);
            for(int i=0; i<en; i++)
            {
                printf("enter employee id : ");
                scanf("%d",&data[i].id);
                printf("enter employee name : ");
                scanf("%s",data[i].name);
                printf("enter employee salary : ");
                scanf("%f",&data[i].salary);

            }
            break;
        case 2:
            if(en==0)
            {
                printf("No employees found please insert first!!");
            }
            else
            {
                for(int i=0; i<en; i++)
                {
                    printf("Employee Id:%d\n",data[i].id);
                    printf("Employee Name:%s\n",data[i].name);
                    printf("Employee Salary:%f\n",data[i].salary);

                }
            }
            break;
        case 3:
            if(en == 0)
            {
                printf("No employees found please insert first!!\n");
            }
            else
            {
                int found = 0;  // flag to check if employee exists
                printf("Enter employee id to find their data : ");
                scanf("%d", &eid);

                for(int i=0; i<en; i++)
                {
                    if(data[i].id == eid)
                    {
                        printf("\nEmployee Found!\n");
                        printf("Employee Id: %d\n", data[i].id);
                        printf("Employee Name: %s\n", data[i].name);
                        printf("Employee Salary: %.2f\n", data[i].salary);
                        found = 1;
                        break; // exit loop once found
                    }
                }

                if(!found)
                {
                    printf("Employee with id %d not found!\n", eid);
                }
            }
            break;

        case 4:
            printf("EXITING PROGRAM!!!!!!!!!!!");
            break;
        default:
            printf("invalid choice!!!!!!!!!!!");
        }
    }
    while(ch!=4);
}
